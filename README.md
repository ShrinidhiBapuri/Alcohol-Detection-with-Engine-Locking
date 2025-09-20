Alcohol Detection with Engine Locking 🚗🔒🍺

This project focuses on addressing one of the major causes of road accidents – drunk driving. The system is designed to detect alcohol consumption in drivers and prevent the vehicle from starting if the detected level exceeds a safe threshold. Using an MQ-3 alcohol sensor connected to an Arduino UNO microcontroller, the system continuously monitors the driver’s breath. When alcohol is detected above the set threshold, the Arduino activates a relay that locks the vehicle’s engine, while also triggering a buzzer and LED indicator to provide immediate warning. In addition, a GSM module can be used to send SMS alerts to notify concerned authorities or family members.

The hardware components used in this project include an Arduino UNO, MQ-3 alcohol sensor, relay module, DC motor (used here to simulate the engine), GSM module, buzzer, LED, breadboard, jumper wires, and a suitable power supply. The software implementation is carried out using the Arduino IDE, where the logic is coded to continuously compare sensor readings with the threshold value and execute engine locking or unlocking accordingly.

The working principle is straightforward: if the alcohol level detected is below the threshold, the engine runs normally and no alarms are triggered. However, when the level crosses the set limit, the engine is locked, the buzzer and LED are activated, and an alert is sent. This makes the system highly useful for reducing accidents caused by drunk driving.

In terms of applications, the system can be implemented in cars and other four-wheelers to enhance passenger safety. It can also serve as a supportive tool for law enforcement agencies to automatically monitor drivers. The system is cost-effective, reliable, and easy to integrate into existing vehicles, making it a practical solution to a serious problem.

Looking ahead, the project has promising future scope. It can be further enhanced with additional safety features such as heart rate and drowsiness detection, integration with IoT platforms for real-time monitoring by traffic authorities, and GPS-based tracking for precise location alerts. These improvements can help create an intelligent and comprehensive vehicle safety system.

This project was developed by Shrinidhi Bapuri, Sneha S, Sneha S Gowda, and Srushti Shetty, under the guidance of Mrs. Poornima Kamath, Assistant Professor, ECE Department, BMSCE. It represents an innovative step toward safer roads and an effective solution to reducing accidents caused by alcohol-impaired driving.
