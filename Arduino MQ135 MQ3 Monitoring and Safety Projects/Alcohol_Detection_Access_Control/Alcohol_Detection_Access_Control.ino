#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

#define MQ3_PIN A0

#define GREEN_LED 2
#define YELLOW_LED 3
#define RED_LED 4

#define BUZZER 5

void setup() {

  lcd.init();
  lcd.backlight();

  pinMode(GREEN_LED, OUTPUT);
  pinMode(YELLOW_LED, OUTPUT);
  pinMode(RED_LED, OUTPUT);
  pinMode(BUZZER, OUTPUT);
}

void loop() {

  int alcoholValue = analogRead(MQ3_PIN);

  digitalWrite(GREEN_LED, LOW);
  digitalWrite(YELLOW_LED, LOW);
  digitalWrite(RED_LED, LOW);
  digitalWrite(BUZZER, LOW);

  lcd.clear();

  lcd.setCursor(0, 0);
  lcd.print("Value:");
  lcd.print(alcoholValue);

  if (alcoholValue <= 300) {

    digitalWrite(GREEN_LED, HIGH);

    lcd.setCursor(0, 1);
    lcd.print("ACCESS GRANTED");

    delay(500);
  }

  else if (alcoholValue <= 600) {

    digitalWrite(YELLOW_LED, HIGH);

    lcd.setCursor(0, 1);
    lcd.print("WARNING");

    delay(500);
  }

  else {

    digitalWrite(RED_LED, HIGH);
    digitalWrite(BUZZER, HIGH);

    lcd.setCursor(0, 1);
    lcd.print("ACCESS DENIED");

    delay(2000);

    for (int i = 10; i > 0; i--) {

      lcd.clear();

      lcd.setCursor(0, 0);
      lcd.print("RECHECK IN");

      lcd.setCursor(0, 1);
      lcd.print(i);
      lcd.print(" SEC");

      digitalWrite(RED_LED, HIGH);
      delay(500);

      digitalWrite(RED_LED, LOW);
      delay(500);
    }
  }
}