#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x3F, 16, 2); // I2C address 0x3F, 16 column and 2 rows

const int trigPin = D4;  //D4
const int echoPin = D3;  //D3

// defines variables
long duration;
int distance;

void setup() {
  lcd.init();               // initialize the lcd
  lcd.backlight();          // open the backlight
pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
pinMode(echoPin, INPUT); // Sets the echoPin as an Input
  Serial.begin(9600);
}

void loop() {

// Clears the trigPin
digitalWrite(trigPin, LOW);
delayMicroseconds(2);

// Sets the trigPin on HIGH state for 10 micro seconds
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);

// Reads the echoPin, returns the sound wave travel time in microseconds
duration = pulseIn(echoPin, HIGH);

// Calculating the distance
distance= duration*0.034/2;
// Prints the distance on the Serial Monitor
Serial.print("Distance: ");
Serial.println(distance);

  lcd.clear();
  lcd.setCursor(0, 0); // start to print at the first row
  lcd.print("Distance: ");
  lcd.print(distance);


  delay(500);
}
