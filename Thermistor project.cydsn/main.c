/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include "project.h"
#include "math.h"
#include "float.h"
#include <stdio.h>

// value for r1 resistor
#define R1 (10000)
static float  R1_Voltage;
static float R1_Volt_Float;
static float R1_ADC_Result;
static float totalCurrent;


// thermistor values
static float thermistor_voltage;
static float thermistor_resistance;
static float thermistor_ADC_Result;
static float thermistor_Result_float;
// temperature 
static float Temperature;
static char buffer1[25];
static char buffer2[25];
static double A  = 0.004556448;
static double B =  -0.000292425;
static double C = 1.908193E-06;
// declaring the prototype functions

void LCD_Init(void);
void LCD_Command( unsigned char data );
void LCD_Write_Data( unsigned char data);
void LCD_Print_Data(unsigned char data);
void LCD_Write_String(char *writedata, char length);
void LCD_Pulse(void);
void microSecondDelay( int delayTime);
void LCD_Write_Num(char8 *writedata,int length);
float thermistorResistance(void);
float therm_Temp(void);


typedef struct {
  char D4_Pin;
  char D5_Pin;
  char D6_Pin;
  char D7_Pin;
} Datapins;
Datapins DataLine;

void LCD_Print_Data(unsigned char data){
 // setting the pins for sending the data to the LCD Display
 
 // D4 pin = bit 4 = 0x10
 DataLine.D4_Pin = 0x10;
if((data & DataLine.D4_Pin) == 0x10){
    D4_Pin_11_Write(1);
 }
else{
     D4_Pin_11_Write(0);
        
}
// D5 pin = bit 5 = 0x20
DataLine.D5_Pin = 0x20;
if ((data & DataLine.D5_Pin) == 0x20){
     D5_Pin_12_Write(1);
}
else{
   D5_Pin_12_Write(0);
}
// D6 pin = bit 6 = 0x40
DataLine.D6_Pin = 0x40;
if ((data & DataLine.D6_Pin) == 0x40){
    D6_Pin_13_Write(1);
}
else{
    D6_Pin_13_Write(0);
}

// D7 pin = bit 7 = 0x80
DataLine.D7_Pin = 0x80;
if ((data & DataLine.D7_Pin) == 0x80){
    D7_Pin_14_Write(1);
}
else{
    D7_Pin_14_Write(0);
}
}



// making creating a structure needed to for data line access of LCD


// building all the main functions for the program

void LCD_Init(void){
  CyDelay(40u);
  
   LCD_Command(0x28);
    
   LCD_Command(0x10);
   LCD_Command(0x0C);
   LCD_Command(0x06);
    CyDelay(5u);
}

void LCD_Command(unsigned char data){
    //LCD_Print_Data(data);
    RS_Pin_4_Write(0);
    R_W_Pin_5_Write(0);
     LCD_Print_Data(data);
    LCD_Pulse();
    LCD_Print_Data(data << 4);
   RS_Pin_4_Write(0);
   R_W_Pin_5_Write(0);
    LCD_Pulse();

}

void LCD_Write_Data(unsigned char data){
    Enable_Pin_6_Write(0);
    RS_Pin_4_Write(1);
    R_W_Pin_5_Write(0);
    CyDelayUs(0u);
    LCD_Print_Data(0x00);
    LCD_Print_Data(data);
    LCD_Pulse();
   // LCD_Print_Data(data <<4);
    RS_Pin_4_Write(1);
    R_W_Pin_5_Write(0);
    LCD_Print_Data(data <<4);
    LCD_Pulse();
    
}


void LCD_Write_String(char *writedata,char length){
    for ( unsigned int i = 0; i < length; i++){
        LCD_Write_Data(writedata[i]);
    }

}

void LCD_Write_Num(char8 *writedata,int length){
    
   
    
    for ( unsigned int i = 0; i < sizeof(length); i++){
        LCD_Write_Data(writedata[i]);
    }

}

void LCD_Pulse(void){
 Enable_Pin_6_Write(1);
CyDelay(1);
Enable_Pin_6_Write(0);
    
}

void microSecondDelay( int delayTime){
    for (int i = 0; i < delayTime; i++){
        
    }
    
}   

float thermistorResistance(void){
    // calculating the current for R1 resistor 
    AMux_1_Select(0);
    ADC_DelSig_1_StartConvert();
    ADC_DelSig_1_IsEndConversion(ADC_DelSig_1_WAIT_FOR_RESULT);
    R1_ADC_Result = (float) ADC_DelSig_1_GetResult16();
    R1_Volt_Float = (int16) ADC_DelSig_1_CountsTo_mVolts(R1_ADC_Result);
    R1_Voltage = (float) R1_Volt_Float; // voltage used to calculate the current of R1 and Thermistor
    totalCurrent = (R1_Voltage / R1);  // total current of the system 
    
    // calculating voltage for the thermistor 
    AMux_1_Select(1);
    ADC_DelSig_1_StartConvert();
    ADC_DelSig_1_IsEndConversion(ADC_DelSig_1_WAIT_FOR_RESULT);
    thermistor_ADC_Result = (float) ADC_DelSig_1_GetResult16();
    thermistor_Result_float = (int16) ADC_DelSig_1_CountsTo_mVolts(thermistor_ADC_Result);
    thermistor_voltage = (float) thermistor_Result_float;
    
    // calculating thermistor resistance 
    
    thermistor_resistance = (thermistor_voltage / totalCurrent);
    
    
    
 return  thermistor_resistance;
}

float therm_Temp(void){
    
    // calculating the temperature 
    
   float logrT = (float32)log((float64)thermistorResistance());
    
    Temperature = (float32)(A + (B * logrT) + (C * pow((float64)logrT, (float32)3)));
    Temperature = (int16)((float32)((((1.0 / Temperature) - 273.15) * (float32)100) + 0.5)); // in celsius 
    Temperature = (Temperature * 9.0) / 5.0 + 32.0; // in farenheit
    
   
    return  Temperature;
}

int main(void)
{
    //GlobalIntEnable; /* Enable global interrupts. */
   // start up functions for program LCD, AMUX and ADC
    ADC_DelSig_1_Start();
    AMux_1_Start();
    LCD_Init();
   
   while(1){
    //thermistorResistance();
    //therm_Temp();
     sprintf(buffer1, "Temperature:%.2f",therm_Temp());
     sprintf(buffer2, "Resistance:%.2f",thermistorResistance());
    
   LCD_Command(0x80);
   LCD_Write_String(buffer1,22);
   LCD_Command(0xC0);
   LCD_Write_String(buffer2,22);
  
    CyDelay(2000);
}




}
/* [] END OF FILE */
