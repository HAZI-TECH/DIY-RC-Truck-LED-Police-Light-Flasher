// HAZI TECH
// Programmed by Hasitha Jayasundara
// Visit my YouTube Channel for more info - http://www.youtube.com/c/HAZITECH?sub_confirmation=1

#include "Arduino.h"
#include <EEPROM.h>

#define LED_PIN1 1 //LED 1
#define LED_PIN2 2 //LED 2
#define LED_PIN3 3 //LED 3
#define LED_PIN4 4 //LED 4
#define buttonPin 0 //Push Button Pin

int SPEED = 60;

int numb = 1;
int pres = 0;

void setup() 
{
EEPROM.update(0,1); // *IMPORTANT* - Run this code line ONLY for the 1st time. Then comment it and re-upload the code
numb = EEPROM.read(0);
pinMode(buttonPin, INPUT);
pinMode(LED_PIN1, OUTPUT);
pinMode(LED_PIN2, OUTPUT);
pinMode(LED_PIN3, OUTPUT);
pinMode(LED_PIN4, OUTPUT);
}

void loop() 
{
ButtonScan();

switch (numb) {
  case 1:
    HAZI_TECH_VIP_1();
    break;
  case 2:
    HAZI_TECH_VIP_2();
    break;
  case 3:
    HAZI_TECH_VIP_3();
    break;
  case 4:
    HAZI_TECH_VIP_4();
    break;
  case 5:
    HAZI_TECH_VIP_5();
    break;  
  case 6:
    HAZI_TECH_VIP_6();
    break; 
  case 7:
    HAZI_TECH_VIP_7();
    break; 
  case 8:
    HAZI_TECH_VIP_8();
    break; 
  case 9:
    HAZI_TECH_VIP_2();
    HAZI_TECH_VIP_3();

    HAZI_TECH_VIP_4();
    HAZI_TECH_VIP_4();
    HAZI_TECH_VIP_4();

    HAZI_TECH_VIP_5();
    HAZI_TECH_VIP_5();

    HAZI_TECH_VIP_6();
    HAZI_TECH_VIP_6();
    HAZI_TECH_VIP_6();
    HAZI_TECH_VIP_6();
    HAZI_TECH_VIP_6();

    HAZI_TECH_VIP_7();
    HAZI_TECH_VIP_7();
    HAZI_TECH_VIP_7();
    HAZI_TECH_VIP_7();
    HAZI_TECH_VIP_7();

    HAZI_TECH_VIP_8();
    HAZI_TECH_VIP_8();
    HAZI_TECH_VIP_8();
    HAZI_TECH_VIP_8();
    HAZI_TECH_VIP_8();
    break; 
  default:
    HAZI_TECH_VIP_1();
    break;
}
}

void HAZI_TECH_VIP_1()
{
ButtonScan(); 
digitalWrite(LED_PIN1, LOW);
digitalWrite(LED_PIN2, LOW);
digitalWrite(LED_PIN3, LOW);
digitalWrite(LED_PIN4, LOW); 
}

void HAZI_TECH_VIP_2()
{
digitalWrite(LED_PIN1, HIGH);
digitalWrite(LED_PIN2, HIGH);
delay (SPEED); ButtonScan();
digitalWrite(LED_PIN1, LOW);
digitalWrite(LED_PIN2, LOW);
delay (SPEED); ButtonScan();
digitalWrite(LED_PIN1, HIGH);
digitalWrite(LED_PIN2, HIGH);
delay (SPEED); ButtonScan();
digitalWrite(LED_PIN1, LOW);
digitalWrite(LED_PIN2, LOW);
delay (SPEED); ButtonScan();
digitalWrite(LED_PIN1, HIGH);
digitalWrite(LED_PIN2, HIGH);
delay (SPEED); ButtonScan();
digitalWrite(LED_PIN1, LOW);
digitalWrite(LED_PIN2, LOW);
delay (SPEED); ButtonScan();

digitalWrite(LED_PIN3, HIGH);
digitalWrite(LED_PIN4, HIGH);
delay (SPEED); ButtonScan();
digitalWrite(LED_PIN3, LOW);
digitalWrite(LED_PIN4, LOW);
delay (SPEED); ButtonScan();
digitalWrite(LED_PIN3, HIGH);
digitalWrite(LED_PIN4, HIGH);
delay (SPEED); ButtonScan();
digitalWrite(LED_PIN3, LOW);
digitalWrite(LED_PIN4, LOW);
delay (SPEED); ButtonScan();
digitalWrite(LED_PIN3, HIGH);
digitalWrite(LED_PIN4, HIGH);
delay (SPEED); ButtonScan();
digitalWrite(LED_PIN3, LOW);
digitalWrite(LED_PIN4, LOW);
delay (SPEED); ButtonScan();
}

void HAZI_TECH_VIP_3()
{
digitalWrite(LED_PIN1, HIGH);
digitalWrite(LED_PIN3, HIGH);
delay (SPEED); ButtonScan();
digitalWrite(LED_PIN1, LOW);
digitalWrite(LED_PIN3, LOW);
delay (SPEED); ButtonScan();
digitalWrite(LED_PIN1, HIGH);
digitalWrite(LED_PIN3, HIGH);
delay (SPEED); ButtonScan();
digitalWrite(LED_PIN1, LOW);
digitalWrite(LED_PIN3, LOW);
delay (SPEED); ButtonScan();
digitalWrite(LED_PIN1, HIGH);
digitalWrite(LED_PIN3, HIGH);
delay (SPEED); ButtonScan();
digitalWrite(LED_PIN1, LOW);
digitalWrite(LED_PIN3, LOW);
delay (SPEED); ButtonScan();

digitalWrite(LED_PIN2, HIGH);
digitalWrite(LED_PIN4, HIGH);
delay (SPEED); ButtonScan();
digitalWrite(LED_PIN2, LOW);
digitalWrite(LED_PIN4, LOW);
delay (SPEED); ButtonScan();
digitalWrite(LED_PIN2, HIGH);
digitalWrite(LED_PIN4, HIGH);
delay (SPEED); ButtonScan();
digitalWrite(LED_PIN2, LOW);
digitalWrite(LED_PIN4, LOW);
delay (SPEED); ButtonScan();
digitalWrite(LED_PIN2, HIGH);
digitalWrite(LED_PIN4, HIGH);
delay (SPEED); ButtonScan();
digitalWrite(LED_PIN2, LOW);
digitalWrite(LED_PIN4, LOW);
delay (SPEED); ButtonScan();
}

void HAZI_TECH_VIP_4()
{
digitalWrite(LED_PIN1, HIGH);
digitalWrite(LED_PIN4, HIGH);
delay (SPEED); ButtonScan();
digitalWrite(LED_PIN1, LOW);
digitalWrite(LED_PIN4, LOW);
delay (SPEED); ButtonScan();
digitalWrite(LED_PIN1, HIGH);
digitalWrite(LED_PIN4, HIGH);
delay (SPEED); ButtonScan();
digitalWrite(LED_PIN1, LOW);
digitalWrite(LED_PIN4, LOW);
delay (SPEED); ButtonScan();
digitalWrite(LED_PIN1, HIGH);
digitalWrite(LED_PIN4, HIGH);
delay (SPEED); ButtonScan();
digitalWrite(LED_PIN1, LOW);
digitalWrite(LED_PIN4, LOW);
delay (SPEED); ButtonScan();

digitalWrite(LED_PIN2, HIGH);
digitalWrite(LED_PIN3, HIGH);
delay (SPEED); ButtonScan();
digitalWrite(LED_PIN2, LOW);
digitalWrite(LED_PIN3, LOW);
delay (SPEED); ButtonScan();
digitalWrite(LED_PIN2, HIGH);
digitalWrite(LED_PIN3, HIGH);
delay (SPEED); ButtonScan();
digitalWrite(LED_PIN2, LOW);
digitalWrite(LED_PIN3, LOW);
delay (SPEED); ButtonScan();
digitalWrite(LED_PIN2, HIGH);
digitalWrite(LED_PIN3, HIGH);
delay (SPEED); ButtonScan();
digitalWrite(LED_PIN2, LOW);
digitalWrite(LED_PIN3, LOW);
delay (SPEED); ButtonScan();
}

void HAZI_TECH_VIP_5()
{
digitalWrite(LED_PIN1, HIGH);
delay (SPEED); ButtonScan();
digitalWrite(LED_PIN1, LOW);
delay (SPEED); ButtonScan();
digitalWrite(LED_PIN1, HIGH);
delay (SPEED); ButtonScan();
digitalWrite(LED_PIN1, LOW);
delay (SPEED); ButtonScan();
digitalWrite(LED_PIN1, HIGH);
delay (SPEED); ButtonScan();
digitalWrite(LED_PIN1, LOW);
delay (SPEED); ButtonScan();

digitalWrite(LED_PIN2, HIGH);
delay (SPEED); ButtonScan();
digitalWrite(LED_PIN2, LOW);
delay (SPEED); ButtonScan();
digitalWrite(LED_PIN2, HIGH);
delay (SPEED); ButtonScan();
digitalWrite(LED_PIN2, LOW);
delay (SPEED); ButtonScan();
digitalWrite(LED_PIN2, HIGH);
delay (SPEED); ButtonScan();
digitalWrite(LED_PIN2, LOW);
delay (SPEED); ButtonScan();

digitalWrite(LED_PIN3, HIGH);
delay (SPEED); ButtonScan();
digitalWrite(LED_PIN3, LOW);
delay (SPEED); ButtonScan();
digitalWrite(LED_PIN3, HIGH);
delay (SPEED); ButtonScan();
digitalWrite(LED_PIN3, LOW);
delay (SPEED); ButtonScan();
digitalWrite(LED_PIN3, HIGH);
delay (SPEED); ButtonScan();
digitalWrite(LED_PIN3, LOW);
delay (SPEED); ButtonScan();

digitalWrite(LED_PIN4, HIGH);
delay (SPEED); ButtonScan();
digitalWrite(LED_PIN4, LOW);
delay (SPEED); ButtonScan();
digitalWrite(LED_PIN4, HIGH);
delay (SPEED); ButtonScan();
digitalWrite(LED_PIN4, LOW);
delay (SPEED); ButtonScan();
digitalWrite(LED_PIN4, HIGH);
delay (SPEED); ButtonScan();
digitalWrite(LED_PIN4, LOW);
delay (SPEED); ButtonScan();

digitalWrite(LED_PIN3, HIGH);
delay (SPEED); ButtonScan();
digitalWrite(LED_PIN3, LOW);
delay (SPEED); ButtonScan();
digitalWrite(LED_PIN3, HIGH);
delay (SPEED); ButtonScan();
digitalWrite(LED_PIN3, LOW);
delay (SPEED); ButtonScan();
digitalWrite(LED_PIN3, HIGH);
delay (SPEED); ButtonScan();
digitalWrite(LED_PIN3, LOW);
delay (SPEED); ButtonScan();

digitalWrite(LED_PIN2, HIGH);
delay (SPEED); ButtonScan();
digitalWrite(LED_PIN2, LOW);
delay (SPEED); ButtonScan();
digitalWrite(LED_PIN2, HIGH);
delay (SPEED); ButtonScan();
digitalWrite(LED_PIN2, LOW);
delay (SPEED); ButtonScan();
digitalWrite(LED_PIN2, HIGH);
delay (SPEED); ButtonScan();
digitalWrite(LED_PIN2, LOW);
delay (SPEED); ButtonScan();
}

void HAZI_TECH_VIP_6()
{
digitalWrite(LED_PIN1, HIGH);
digitalWrite(LED_PIN2, HIGH);
digitalWrite(LED_PIN3, HIGH);
digitalWrite(LED_PIN4, HIGH);
delay (SPEED); ButtonScan();
digitalWrite(LED_PIN1, LOW);
digitalWrite(LED_PIN2, LOW);
digitalWrite(LED_PIN3, LOW);
digitalWrite(LED_PIN4, LOW);
delay (SPEED); ButtonScan();

digitalWrite(LED_PIN1, HIGH);
digitalWrite(LED_PIN2, HIGH);
digitalWrite(LED_PIN3, HIGH);
digitalWrite(LED_PIN4, HIGH);
delay (SPEED); ButtonScan();
digitalWrite(LED_PIN1, LOW);
digitalWrite(LED_PIN2, LOW);
digitalWrite(LED_PIN3, LOW);
digitalWrite(LED_PIN4, LOW);
delay (SPEED); ButtonScan();

digitalWrite(LED_PIN1, HIGH);
digitalWrite(LED_PIN2, HIGH);
digitalWrite(LED_PIN3, HIGH);
digitalWrite(LED_PIN4, HIGH);
delay (SPEED); ButtonScan();
digitalWrite(LED_PIN1, LOW);
digitalWrite(LED_PIN2, LOW);
digitalWrite(LED_PIN3, LOW);
digitalWrite(LED_PIN4, LOW);
delay (SPEED); ButtonScan();
delay (SPEED); ButtonScan();
delay (SPEED); ButtonScan();
}

void HAZI_TECH_VIP_7()
{
digitalWrite(LED_PIN1, HIGH);
digitalWrite(LED_PIN2, LOW);
delay (SPEED); ButtonScan();
delay (SPEED); ButtonScan();
digitalWrite(LED_PIN2, HIGH);
digitalWrite(LED_PIN1, LOW);
delay (SPEED); ButtonScan();
delay (SPEED); ButtonScan();
digitalWrite(LED_PIN3, HIGH);
digitalWrite(LED_PIN2, LOW);
delay (SPEED); ButtonScan();
delay (SPEED); ButtonScan();
digitalWrite(LED_PIN4, HIGH);
digitalWrite(LED_PIN3, LOW);
delay (SPEED); ButtonScan();
delay (SPEED); ButtonScan();
digitalWrite(LED_PIN3, HIGH);
digitalWrite(LED_PIN4, LOW);
delay (SPEED); ButtonScan();
delay (SPEED); ButtonScan();
digitalWrite(LED_PIN2, HIGH);
digitalWrite(LED_PIN3, LOW);
delay (SPEED); ButtonScan();
delay (SPEED); ButtonScan();
}

void HAZI_TECH_VIP_8()
{
digitalWrite(LED_PIN1, HIGH);
digitalWrite(LED_PIN2, HIGH);
delay (SPEED); ButtonScan();
delay (SPEED); ButtonScan();
digitalWrite(LED_PIN1, LOW);
digitalWrite(LED_PIN2, LOW);
delay (SPEED); ButtonScan();
delay (SPEED); ButtonScan();
digitalWrite(LED_PIN3, HIGH);
digitalWrite(LED_PIN4, HIGH);
delay (SPEED); ButtonScan();
delay (SPEED); ButtonScan();
digitalWrite(LED_PIN3, LOW);
digitalWrite(LED_PIN4, LOW);
delay (SPEED); ButtonScan();
delay (SPEED); ButtonScan();
}

void ButtonScan()
{
if(digitalRead(buttonPin)==1)
   {
    if(pres==0)
   {
    numb++;
    EEPROM.update(0,numb);
    pres=1;
    digitalWrite(LED_PIN1, HIGH);
    digitalWrite(LED_PIN2, HIGH);
    digitalWrite(LED_PIN3, HIGH);
    digitalWrite(LED_PIN4, HIGH);
    delay (750);
    digitalWrite(LED_PIN1, LOW);
    digitalWrite(LED_PIN2, LOW);
    digitalWrite(LED_PIN3, LOW);
    digitalWrite(LED_PIN4, LOW);
   }
    }
  else
  {
    pres=0;
   }  

 if(numb == 10)
 {
 numb = 1;
 }
}
