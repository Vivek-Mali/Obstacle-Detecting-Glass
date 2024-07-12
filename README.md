# Obstacle-Detecting-Glass
Design And Development of Obstacle-Detecting Glasses by Using Arduino And Ultrasonic Sensor For Visually Impaired

# Introduction:

Millions of individuals around the world are afflicted by blindness, a severe condition. It may be challenging to go around and carry out daily duties. There are several assistive technologies that can benefit the blind, but they can be costly and challenging to operate. This paper introduces ultrasonic spectacles, a unique assistive tool for the blind. Ultrasonic sensors are used in ultrasonic glasses to identify objects in the surrounding area. Ultrasonic waves long it takes for the waves to return. A 3D map of the user's surroundings is produced using this data. The conventional glasses are mounted on the ultrasonic glasses. They are portable and simple to use. The fact that the glasses are inexpensive makes them a practical choice for many blind people. The design and use of the ultrasonic glasses will be covered in this essay. Additionally, we will discuss user study findings that demonstrate the value of the eyewear.

# Overview:

Obstacle-detecting glasses designed for the visually impaired integrate an Arduino microcontroller with an ultrasonic sensor to enhance mobility and safety. The ultrasonic sensor emits sound waves and measures their reflection to detect nearby obstacles. This information is processed by the Arduino, which calculates distances and triggers feedback mechanisms such as vibration or audible alerts when obstacles are detected within a specified range. The glasses are engineered for comfort and durability, with a lightweight frame to ensure prolonged wearability. They aim to provide real-time obstacle detection, enabling users to navigate their surroundings more independently and safely.

•	Ultrasonic sensor: used to calculate distance from object or obstacle in user path.

•	Arduino uno: Microcontroller board with digital/analog pins, ideal for sensor integration.

•	Buzzer: A buzzer is an electronic device that produces an audible sound when an electric current passes through it.

# Component required with Bill of Material:

| Item              | Quantity    | Description                          |    links of products        | 
| :---:             | :---:       | :---:                                | :---:                       |
| Arduino uno       | 1           | Microcontroller board                |  https://amzn.in/d/06Ng27mP |
| Ultrasonic Sensor | 1           | Standard sensor (HC-SR04)            | https://amzn.in/d/09fDYpCs  |
| Vibration Motor   | 1           | Vibration Motor for tactile feedback | https://amzn.in/d/0351O0Iw  |
| Buzzer            | 1           |  Buzzer for audio signal             | https://amzn.in/d/0jjuc7f8  | 
| Battery           | 1           | (9V,300MH)                           | https://amzn.in/d/08mS8YMR  | 
| Jumper Wire       | few         | --                                   | https://amzn.in/d/0iPO9ODt  |

# Table for Pin Connection:               
| Components                        | Component Pin             | Arduino uno Pin                      |                             
| :---:                             | :---:                     | :---:                                |
| Ultrasonic Sensor                 | VCC                       | 5V                                   | 
|                                   | GND                       | GND                                  | 
|                                   | Trig                      | D9                                   | 
|                                   | Echo                      | D10                                  | 
| Buzzer                            | Positive(+)               | D11                                  | 
|                                   | Negative(-)               | GND                                  | 
| Vibration Motor                   | Positive(+)               | D12(via transistor)                  | 
|                                   | Negative(-)               | GND                                  | 

# Block Diagram:
![Block Diagram](https://github.com/Vivek-Mali/Obstacle-Detecting-Glass/assets/173936973/64b8266d-1720-4faf-bd6b-385e265cc2b3)

# Flowchart:
![Flowchart](https://github.com/Vivek-Mali/Obstacle-Detecting-Glass/assets/173936973/f51e248c-4cb0-439c-9e5a-f0a537ed3e39)

# Pin Daigram:
![Pin Diagram](https://github.com/user-attachments/assets/c38152c5-d02d-4dd9-ae41-578411737db2)


# Working Code:
```
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
```
# Testing Video:
https://github.com/Vivek-Mali/Obstacle-Detecting-Glass/assets/173936973/3723c474-9262-4238-8649-e6c4af43693e

# Demo Video:



