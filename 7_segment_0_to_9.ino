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
  The display shows numbers from 0 to 9 with a fixed delay.

  Learning Objectives:
  - Understand how a 7-segment display works
  - Learn digital OUTPUT pins
  - Learn arrays and for-loops
  - Build debugging skills for hardware projects

  Tutorial Video:
  Refer to the YouTube tutorial linked in the GitHub repository README.

  Created for educational use.
*/

// Segment pins
int segA = 2;
int segB = 3;
int segC = 4;
int segD = 5;
int segE = 6;
int segF = 7;
int segG = 8;

// Store pins in array
int segments[] = {segA, segB, segC, segD, segE, segF, segG};

// COMMON ANODE
// 0 = ON, 1 = OFF
int numbers[10][7] = {
  {0, 0, 0, 0, 0, 1, 0}, // 0
  {1, 0, 0, 1, 1, 1, 1}, // 1
  {0, 0, 1, 0, 0, 0, 1}, // 2
  {0, 0, 0, 0, 1, 0, 1}, // 3
  {1, 0, 0, 1, 1, 0, 0}, // 4
  {0, 1, 0, 0, 1, 0, 0}, // 5
  {0, 1, 0, 0, 0, 0, 0}, // 6
  {0, 0, 0, 1, 1, 1, 1}, // 7
  {0, 0, 0, 0, 0, 0, 0}, // 8
  {0, 0, 0, 0, 1, 0, 0} // 9
};

void setup() {
  for (int i = 0; i < 7; i++) {
    pinMode(segments[i], OUTPUT);
    digitalWrite(segments[i], HIGH); // OFF initially
  }
}

void loop() {
  for (int num = 0; num <= 9; num ++) { // 0,2,4,6,8
    for (int i = 0; i < 7; i++) {
      digitalWrite(segments[i], numbers[num][i]);
    }
    delay(500);
  }
}
