#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

#define MQ135_PIN A0
#define MQ3_PIN   A1

#define GREEN_LED 2
#define YELLOW_LED 3
#define RED_LED 4

#define BUZZER 5

void setup() {

  Serial.begin(9600);

  lcd.init();
  lcd.backlight();

  pinMode(GREEN_LED, OUTPUT);
  pinMode(YELLOW_LED, OUTPUT);
  pinMode(RED_LED, OUTPUT);
  pinMode(BUZZER, OUTPUT);
}

void loop() {

  int airValue = analogRead(MQ135_PIN);
  int alcoholValue = analogRead(MQ3_PIN);

  digitalWrite(GREEN_LED, LOW);
  digitalWrite(YELLOW_LED, LOW);
  digitalWrite(RED_LED, LOW);
  digitalWrite(BUZZER, LOW);

  String status;

  if (airValue > 600 || alcoholValue > 600) {

    status = "DANGER";

    digitalWrite(RED_LED, HIGH);
    digitalWrite(BUZZER, HIGH);
  }
  else if (airValue > 300 || alcoholValue > 300) {

    status = "WARNING";

    digitalWrite(YELLOW_LED, HIGH);
  }
  else {

    status = "SAFE";

    digitalWrite(GREEN_LED, HIGH);
  }

  // LCD Display
  lcd.clear();

  lcd.setCursor(0, 0);
  lcd.print("A:");
  lcd.print(airValue);

  lcd.print(" M:");
  lcd.print(alcoholValue);

  lcd.setCursor(0, 1);
  lcd.print(status);

  // Serial Monitor
  Serial.print("Air Quality: ");
  Serial.print(airValue);

  Serial.print(" | Alcohol: ");
  Serial.print(alcoholValue);

  Serial.print(" | Status: ");
  Serial.println(status);

  delay(1000);
}