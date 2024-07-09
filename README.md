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
| Buzzer            | 1           |  Buzzer for audio signal             | https://amzn.in/d/0jjuc7f8  | 
| Battery           | 1           | (9V,300MH)                           | https://amzn.in/d/08mS8YMR  | 
| Jumper Wire       | 1 set       | --                                   | https://amzn.in/d/0iPO9ODt  |
| Vibration Motor   | 1           | Vibration Motor for tactile feedback | https://amzn.in/d/0351O0Iw  |

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

# Demo Video:
https://github.com/Vivek-Mali/Obstacle-Detecting-Glass/assets/173936973/3723c474-9262-4238-8649-e6c4af43693e





