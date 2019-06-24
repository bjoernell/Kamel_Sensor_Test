#define SensorA0 A0
#define SensorD1 1
#define SensorD2 2
#define SensorD3 3
#define SensorD4 4
#define SensorD5 5
#define SensorD6 6
#define SensorD7 7
#define SensorD8 8

void setup() {
  Serial.begin(9600);  
  pinMode(SensorA0, INPUT);  // sets the digital pin 13 as output
  pinMode(SensorD1, INPUT);  // sets the digital pin 13 as output
  pinMode(SensorD2, INPUT);    // sets the digital pin 7 as input
  pinMode(SensorD3, INPUT);  // sets the digital pin 13 as output
  pinMode(SensorD4, INPUT);    // sets the digital pin 7 as input
  pinMode(SensorD5, INPUT);  // sets the digital pin 13 as output
  pinMode(SensorD6, INPUT);    // sets the digital pin 7 as inputpinMode(SensorD1, OUTPUT);  // sets the digital pin 13 as output
  pinMode(SensorD7, INPUT);    // sets the digital pin 7 as inputpinMode(SensorD1, OUTPUT);  // sets the digital pin 13 as output
  pinMode(SensorD8, INPUT);    // sets the digital pin 7 as input
}

void loop() {
  Serial.print("A0: ");
  Serial.print(analogRead (SensorA0));
  Serial.print("\tD1: ");
  Serial.print(digitalRead (SensorD1));
  Serial.print("\tD2: ");
  Serial.print(digitalRead (SensorD2));
  Serial.print("\tD3: ");
  Serial.print(digitalRead (SensorD3));
  Serial.print("\tD4: ");
  Serial.print(digitalRead (SensorD4));
  Serial.print("\tD5 ");
  Serial.print(digitalRead (SensorD5));
  Serial.print("\tD6: ");
  Serial.print(digitalRead (SensorD6));
  Serial.print("\tD7: ");
  Serial.print(digitalRead (SensorD7));
  Serial.print("\tD8: ");
  Serial.print(digitalRead (SensorD8));
  Serial.println();
}
