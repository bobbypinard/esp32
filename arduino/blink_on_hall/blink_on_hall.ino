#define INTERNAL_LED 2

int hall_val = 0;

void setup() {
  pinMode(INTERNAL_LED,OUTPUT);
  Serial.begin(9600);
    }

void loop() {
  hall_val = hallRead();

  Serial.println(hall_val);
  if (hall_val >= 60){
    digitalWrite(INTERNAL_LED,HIGH);
    delay(1000);
    digitalWrite(INTERNAL_LED,LOW);
  }
  delay(1000);
}
