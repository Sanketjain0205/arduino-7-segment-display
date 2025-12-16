// Segment pins
int segA = 2;
int segB = 3;
int segC = 4;
int segD = 5;
int segE = 6;
int segF = 7;
int segG = 8;

// Buzzer pin
int buzzer = 13;

// Store pins in array
int segments[] = {segA, segB, segC, segD, segE, segF, segG};

// COMMON ANODE patterns
// 0 = ON, 1 = OFF
int numbers[10][7] = {
  {0,0,0,0,0,1,0}, // 0
  {1,0,0,1,1,1,1}, // 1
  {0,0,1,0,0,0,1}, // 2
  {0,0,0,0,1,0,1}, // 3
  {1,0,0,1,1,0,0}, // 4
  {0,1,0,0,1,0,0}, // 5
  {0,1,0,0,0,0,0}, // 6
  {0,0,0,1,1,1,1}, // 7
  {0,0,0,0,0,0,0}, // 8
  {0,0,0,0,1,0,0}  // 9
};

void setup() {
  for (int i = 0; i < 7; i++) {
    pinMode(segments[i], OUTPUT);
    digitalWrite(segments[i], HIGH); // segments OFF
  }

  pinMode(buzzer, OUTPUT);
  digitalWrite(buzzer, LOW);
}

void loop() {

  // Countdown with short beeps
  for (int num = 9; num >= 0; num--) {

    // Display number
    for (int i = 0; i < 7; i++) {
      digitalWrite(segments[i], numbers[num][i]);
    }

    // Short beep (tick sound)
    digitalWrite(buzzer, HIGH);
    delay(100);
    digitalWrite(buzzer, LOW);

    delay(900); // completes 1 second
  }

  // Long beep at 0
  digitalWrite(buzzer, HIGH);
  delay(3000);
  digitalWrite(buzzer, LOW);

  delay(1000); // pause before restart
}
/*
 Project: Arduino 1-Digit 7-Segment Display (Counting Numbers)
 Author: Siddham Robotics Initiatives

 Description:
 This program controls a 1-digit 7-segment display using an Arduino Uno.
 The display used in this project is a COMMON CATHODE type.
 The Arduino turns individual segments ON and OFF to display numbers from 0 to 9.

 Connections:
 Segment A -> Pin 2
 Segment B -> Pin 3
 Segment C -> Pin 4
 Segment D -> Pin 5
 Segment E -> Pin 6
 Segment F -> Pin 7
 Segment G -> Pin 8
 Common Pin -> 5V

 Resistors:
 Use one 220 ohm resistor for common pin.

 Output:
 The display shows a countdown from 9 to 0 with a fixed delay and buzzer bip on each count.

 Learning Objectives:
 - Understand how a 7-segment display works
 - Learn digital OUTPUT pins
 - Learn arrays and for-loops
 - Build debugging skills for hardware projects

 Tutorial Video:
 Refer to the YouTube tutorial linked in the GitHub repository README.

 Created for educational use.
*/
