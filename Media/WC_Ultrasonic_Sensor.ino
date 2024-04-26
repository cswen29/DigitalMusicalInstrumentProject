// Definitions of pins 
const int trigPin = 9;
const int echoPin = 10; 

float duration, distance; 

void setup() {
  // Declare pins as output/input then start Serial communications. 
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600); 
}

void loop() {
  // set trigPin low for 2 microseconds just to make sure the pin is low first
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  // Setting trigpin to high for 10 microseconds sends out an 8 cycle sonic burst from the transmitter, 
  // which then bounces off an object and hits the receiver(Which is connected to the Echo Pin)
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW); 
  //When sound hits receiver, it turnns the Echo pin high, this function starts timing when the pin goes into the state you put in then stop timing it when the state switches
  duration = pulseIn(echoPin, HIGH); 

  // DST, speed of sound in centimeters per microseconds is .0434 
  distance = (duration * .0343)/2;

  Serial.print("Distance: ");
  Serial.println(distance);
  delay(100); 
}
