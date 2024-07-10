#define TRIG1_PIN 9
#define ECHO1_PIN 11
#define TRIG2_PIN 10
#define ECHO2_PIN 12
#define MOTOR_PIN 6
#define BUZZER_PIN 7

#define DISTANCE_THRESHOLD 80 // Distance threshold in cm

void setup() {
  Serial.begin(9600);

  pinMode(TRIG1_PIN, OUTPUT);
  pinMode(ECHO1_PIN, INPUT);
  pinMode(TRIG2_PIN, OUTPUT);
  pinMode(ECHO2_PIN, INPUT);
  pinMode(MOTOR_PIN, OUTPUT);
  pinMode(BUZZER_PIN, OUTPUT);

  digitalWrite(MOTOR_PIN, LOW);
  digitalWrite(BUZZER_PIN, LOW);
}
void loop() {
  long distance1 = getDistance(TRIG1_PIN, ECHO1_PIN);
  long distance2 = getDistance(TRIG2_PIN, ECHO2_PIN);

  Serial.print("Distance1: ");
  Serial.print(distance1);
  Serial.print(" cm, Distance2: ");
  Serial.println(distance2);

  if (distance1 < DISTANCE_THRESHOLD || distance2 < DISTANCE_THRESHOLD) {
    digitalWrite(MOTOR_PIN, HIGH);
    tone(BUZZER_PIN, 1000); // Frequency of the buzzer
  } else {
    digitalWrite(MOTOR_PIN, LOW);
    noTone(BUZZER_PIN);
  }

  delay(100);
}

long getDistance(int trigPin, int echoPin) {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  long duration = pulseIn(echoPin, HIGH);
  long distance = duration * 0.0344 / 2;

  return distance;
}
