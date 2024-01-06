# SMMS (Soil Moisture Monitoring System)

## Hardware
**Arduino Uno R3** [Store - botland.com.pl](https://botland.com.pl)  
**Digital Screen I2C LCM1602 2X16** [Store - botland.com.pl](https://botland.com.pl/wyswietlacze-alfanumeryczne-i-graficzne/2351-wyswietlacz-lcd-2x16-znakow-niebieski-konwerter-i2c-lcm1602-5904422309244.html)
  **Soil Moisture Sensor** [Store - botland.com.pl](https://botland.com.pl/czujniki-wilgotnosci/1588-czujnik-wilgotnosci-gleby-5904422368289.html)  

## Conection 

|Arduino|Digital Screen|Soil Moisture Sensor|
|-------|--------------|--------------------|
|  GND  |  GND  |       |
|  5V   |  VCC  |       | 
|  A4   |  SDA  |       |
|  A5   |  SCL  |       |
|  3.3V |       |  VCC  |
|  GND  |       |  GND  |
|  2    |       |  D0   |
|  A0   |       |  A0   |


## Library 
[LiquidCrystal_I2C-1.1.2](https://www.arduinolibraries.info/libraries/liquid-crystal-i2-c)


## Description
It is a basic soil moisture monitoring system. Designed for students and young people.
