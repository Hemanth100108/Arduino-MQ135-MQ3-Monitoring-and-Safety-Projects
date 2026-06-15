#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

#define MQ135_PIN A0
#define MQ3_PIN   A1

#define BUTTON_PIN 2
#define BUZZER_PIN 3

bool airMode = true;
bool lastButtonState = HIGH;

void setup() {
  lcd.init();
  lcd.backlight();

  pinMode(BUTTON_PIN, INPUT_PULLUP);
  pinMode(BUZZER_PIN, OUTPUT);

  lcd.setCursor(0, 0);
  lcd.print("Dual Monitor");
  delay(2000);
  lcd.clear();
}

void loop() {

  bool currentButtonState = digitalRead(BUTTON_PIN);

  if (currentButtonState == LOW && lastButtonState == HIGH) {
    airMode = !airMode;
    delay(250);
  }

  lastButtonState = currentButtonState;

  lcd.clear();

  if (airMode) {

    int airValue = analogRead(MQ135_PIN);

    lcd.setCursor(0, 0);
    lcd.print("Air Quality");

    lcd.setCursor(0, 1);
    lcd.print("Val:");
    lcd.print(airValue);

    if (airValue > 600) {
      digitalWrite(BUZZER_PIN, HIGH);
    } else {
      digitalWrite(BUZZER_PIN, LOW);
    }
  }
  else {

    int alcoholValue = analogRead(MQ3_PIN);

    lcd.setCursor(0, 0);
    lcd.print("Alcohol Mode");

    lcd.setCursor(0, 1);
    lcd.print("Val:");
    lcd.print(alcoholValue);

    if (alcoholValue > 300) {
      digitalWrite(BUZZER_PIN, HIGH);
    } else {
      digitalWrite(BUZZER_PIN, LOW);
    }
  }

  delay(300);
}