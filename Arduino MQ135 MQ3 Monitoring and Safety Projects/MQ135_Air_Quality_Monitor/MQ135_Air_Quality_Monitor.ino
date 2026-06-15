#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

#define MQ135 A0

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

  lcd.setCursor(0, 0);
  lcd.print("Air Monitor");
  delay(2000);
  lcd.clear();
}

void loop() {

  int airValue = analogRead(MQ135);

  // Turn OFF everything first
  digitalWrite(GREEN_LED, LOW);
  digitalWrite(YELLOW_LED, LOW);
  digitalWrite(RED_LED, LOW);
  digitalWrite(BUZZER, LOW);

  lcd.clear();

  lcd.setCursor(0, 0);
  lcd.print("AQ:");
  lcd.print(airValue);

  if (airValue < 300) {
    digitalWrite(GREEN_LED, HIGH);

    lcd.setCursor(0, 1);
    lcd.print("GOOD");
  }

  else if (airValue < 600) {
    digitalWrite(YELLOW_LED, HIGH);

    lcd.setCursor(0, 1);
    lcd.print("MODERATE");
  }

  else {
    digitalWrite(RED_LED, HIGH);
    digitalWrite(BUZZER, HIGH);

    lcd.setCursor(0, 1);
    lcd.print("POOR");
  }

  delay(500);
}