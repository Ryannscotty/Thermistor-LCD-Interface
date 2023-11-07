# Thermistor-LCD-Interface

During this project I will be using a Thermistor temperature sensor to measure the change in resistance and temperature data while the sensor is operational, these values will be displayed on a 16x2 bit LCD screen, the values of the sensor will be sent to the datalines of the LCD registers to display the data on the screen. We will also incorperate the PSoc 5Lp Microcontroller to drive the sensor and LCD.

![toplevel](https://github.com/Ryannscotty/Thermistor-LCD-Interface/assets/97707478/83756537-9d27-4d1f-b1c3-50d279645b5e)

Top-Level Design




We use temperature sensors all the time, they are usually im most consumer products and help a lot of applications maintain there stability. There are many types of temperature sensors on the market and one of the most commonly used ones are Thermistors. 
Thermistors are sensors on a chip, they are often created using metal-oxide materials and have the ability to have an large resistance change for a small temperature change, these sensors are mostly non-linear and often have a negative temperature coefficient. with temperature measurment ranges between -50 to 200 degrees celcius. 

![thermistor](https://github.com/Ryannscotty/Thermistor-LCD-Interface/assets/97707478/327bf2b9-1709-4bcf-acd0-77c0d294d39c)



We relate the temperature to resistance on the thermistor by using the datasheet and also by the use of the Steinhart-Hart temperature equation, this equation gives us the proper cnversion of Temperature vs Resistance, the high changes in resistance can tell us the accurate change of temperature when applying this equation to the values being read from the ADC of the PSoc MCU. 

![steinhart](https://github.com/Ryannscotty/Thermistor-LCD-Interface/assets/97707478/c19a3e46-47aa-4ec4-a066-3adb0f0e082b)








