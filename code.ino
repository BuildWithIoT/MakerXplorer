const int trigPin = 8; 
const int echoPin = 7; 
const int buzzerPin = 9; 
const int ledPin = 10;
long duration;
int distance;
void setup() 
{
 pinMode(trigPin, OUTPUT);
 pinMode(echoPin, INPUT);
 pinMode(buzzerPin, OUTPUT);
 pinMode(ledPin, OUTPUT);
 Serial.begin(9600);
}
void loop() 
{
 digitalWrite(trigPin, LOW);
 delayMicroseconds(2);
 digitalWrite(trigPin, HIGH);
 delayMicroseconds(10);
 digitalWrite(trigPin, LOW);
 duration = pulseIn(echoPin, HIGH);
 distance = duration * 0.034 / 2; 
 Serial.print("Distance: ");
 Serial.println(distance);
 if (distance > 0 && distance <= 50) 
{ 
 digitalWrite(buzzerPin, HIGH); 
 digitalWrite(ledPin, HIGH); 
 delay(1000); 
 digitalWrite(buzzerPin, LOW); 
 digitalWrite(ledPin, LOW); 
 }
 delay(200); 
}