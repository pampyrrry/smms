#include <LiquidCrystal_I2C.h>

//initialize lcd
LiquidCrystal_I2C lcd(0x27,16,2);

//Soil Moisture Sensor
int sensor_A0 = A0;    // podłączenie od A0 na czujniku do A0 na Arduino
int sensor_D0 = 2;     // podłączenie od D0 na czujniku do pinu 2 na Arduino
int wartosc_A0;        // zmienna dla wartości A0
int wartosc_D0;        // zmienna dla wartości A0

void setup()
{
  lcd.init();
  lcd.clear();         
  lcd.backlight();      // Make sure backlight is on
  
  // Print a message on both lines of the LCD.
  //lcd.cursor(column,row) index starts at 0
  lcd.setCursor(2,0);   //Set cursor to character 2 on line 0
  lcd.print("Hello world!");
  
  lcd.setCursor(2,1);   //Move cursor to character 2 on line 1
  lcd.print("LCD Tutorial");
  delay(3000);
  //__________________________________________________________//
  Serial.begin(57600);   // uruchomienie monitora szeregowego
  pinMode(2, INPUT);    // ustawienie pinu 2 jako wejście
}

void loop()
{
  wartosc_A0 = analogRead(sensor_A0); // pobranie wartosci z A0
  wartosc_D0 = digitalRead(sensor_D0); //pobranie wartości z D0
    lcd.clear(); 
    lcd.setCursor(0,0);
    lcd.print("Wilgotnosc gleby: ");
    lcd.setCursor(0,1);
    lcd.print(wartosc_A0);
    delay(2000);
    lcd.clear();
    //lcd.setCursor(0,0);   //Set cursor to character 2 on line 0
    //lcd.print("Cyfrowy sygnal: ");
    //lcd.setCursor(0,1);
    //lcd.println(wartosc_D0);
    //delay(10000);
}
