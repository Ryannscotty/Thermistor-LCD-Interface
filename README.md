# Thermistor-LCD-Interface

During this project I will be using a Thermistor temperature sensor to measure the change in resistance and temperature data while the sensor is operational, these values will be displayed on a 16x2 bit LCD screen, the values of the sensor will be sent to the datalines of the LCD registers to display the data on the screen. We will also incorperate the PSoc 5Lp Microcontroller to drive the sensor and LCD.

![toplevel](https://github.com/Ryannscotty/Thermistor-LCD-Interface/assets/97707478/83756537-9d27-4d1f-b1c3-50d279645b5e)

Top-Level Design




We use temperature sensors all the time, they are usually im most consumer products and help a lot of applications maintain there stability. There are many types of temperature sensors on the market and one of the most commonly used ones are Thermistors. 
Thermistors are sensors on a chip, they are often created using metal-oxide materials and have the ability to have an large resistance change for a small temperature change, these sensors are mostly non-linear and often have a negative temperature coefficient. with temperature measurment ranges between -50 to 200 degrees celcius. 

![thermistor](https://github.com/Ryannscotty/Thermistor-LCD-Interface/assets/97707478/327bf2b9-1709-4bcf-acd0-77c0d294d39c)



We relate the temperature to resistance on the thermistor by using the datasheet and also by the use of the Steinhart-Hart temperature equation, this equation gives us the proper cnversion of Temperature vs Resistance, the high changes in resistance can tell us the accurate change of temperature when applying this equation to the values being read from the ADC of the PSoc MCU. 

![steinhart](https://github.com/Ryannscotty/Thermistor-LCD-Interface/assets/97707478/c19a3e46-47aa-4ec4-a066-3adb0f0e082b)


The 16x2 bit LCD Screen contains 2 register stacks which controls the data and the command instuctions for formatting the data. The timing is very important when configuring the LCD because certain bits need to be wriitten to the registers to enable data to be sent,recieved or changed. 

![LCD](https://github.com/Ryannscotty/Thermistor-LCD-Interface/assets/97707478/c27e4ccb-507a-490f-94ce-a6a619ee2bf2)

The microcontroller choosen for this project was the PSoC 5LP from Infineon technologies, this MCU is the industry’s most integrated programmable SoC, combining high-precision and programmable analog and digital peripherals with an ARM Cortex-M3 CPU in a single chip. Process sensor signals with the 24-bit hardware DFB coprocessor, offload traditional CPU tasks to the CPLD-based Universal Digital Blocks and increase system performance with the peripheral-to-peripheral DMA controller. Integrate high-precision custom 20-bit Analog Front Ends with the Programmable Analog Blocks including opamps, PGAs, filters, comparators, SAR and Delta-Sigma ADCs and the industry's best CAPSENSE™ touch-sensing solution.


![mcu](https://github.com/Ryannscotty/Thermistor-LCD-Interface/assets/97707478/1a18d05b-dc20-4907-aa33-1436cd4d4f88)



This was the final result to the project, with everything fully implemented and functioning.


![circuit](https://github.com/Ryannscotty/Thermistor-LCD-Interface/assets/97707478/6f6f4ee6-a9cc-40c9-9e0d-e4e8372bb5d8)



