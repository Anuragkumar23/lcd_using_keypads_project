#include <Wire.h> 
#include <Keypad.h>
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

// Set the LCD address to 0x27 for a 16 chars and 2 line display
// SDA - A4
// SCL - A5

LiquidCrystal_I2C lcd(0x27, 16, 2);

const byte ROWS = 4; 
const byte COLS = 4;

char hexaKeys[ROWS][COLS] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};

byte rowPins[ROWS] = {9, 8, 7, 6};
byte colPins[COLS] = {5, 4, 3, 2};

Keypad customKeypad = Keypad(makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS);

void setup()
{
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
  
  Serial.begin(9600);
   lcd.begin();
  lcd.backlight();

}
void loop()
{
 char key = customKeypad.getKey();
   if (key){
    Serial.println(key);
  } 
   
  if(key=='1')
  {
     
  lcd.setCursor(0,0); //
   lcd.print("Press  =1");
       
  }
  if(key=='2')
  {
     
  lcd.setCursor(0,0); //
   lcd.print("Press  =2");
  }
  if(key=='3')
  {
      
  lcd.setCursor(0,0); //
   lcd.print("Press  =3");
       
  }
  if(key=='4')
  {
      
  lcd.setCursor(0,0); //
   lcd.print(" Press =4");
       
  }
  
if(key=='5')
  {
      
  lcd.setCursor(0,0); //
   lcd.print(" Press =5");
       
  }
  if(key=='6')
  {
      
  lcd.setCursor(0,0); //
   lcd.print(" Press  =6");
       
  }
  if(key=='7')
  {
      
  lcd.setCursor(0,0); //
   lcd.print(" Press  =7");
       
  }
  if(key=='8')
  {
      
  lcd.setCursor(0,0); //
   lcd.print(" Press  =8");
       
  }
  if(key=='9')
  {
      
  lcd.setCursor(0,0); 
   lcd.print(" Press  =9");
       
  }
  if(key=='C')
  {
      
  lcd.setCursor(0,0); 
   lcd.print(" Press  =C");
       
  }
  
  
 
  if(key=='A')
  {
      
   lcd.setCursor(0,0); 
   lcd.print(" Press  =A");
       
  }
  
  
  {
      if(key=='B')
  {
      
   lcd.setCursor(0,0); 
   lcd.print(" Press  =B");
       
  }
   if(key=='0')
  {
      
   lcd.setCursor(0,0); 
   lcd.print(" Press  =0");
       
  } if(key=='*')
  {
      
   lcd.setCursor(0,0); 
   lcd.print(" Press  =*");
       
  } if(key=='#')
  {
      
   lcd.setCursor(0,0); 
   lcd.print(" Press  =#");
       
  }

    if(key=='D')
  {
      
   lcd.setCursor(0,0); 
   lcd.print(" Press  =D");
       
  }
  }
}
