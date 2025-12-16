int SegA = 2;
int SegB = 3;
int SegC = 4;
int SegD = 5;
int SegE = 6;
int SegF = 7;
int SegG = 8;

void setup() {
  // put your setup code here, to run once:
  pinMode(SegA, OUTPUT);
  pinMode(SegB, OUTPUT);
  pinMode(SegC, OUTPUT);
  pinMode(SegD, OUTPUT);
  pinMode(SegE, OUTPUT);
  pinMode(SegF, OUTPUT);
  pinMode(SegG, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(SegA, HIGH);
  digitalWrite(SegB, HIGH);
  digitalWrite(SegC, HIGH);
  digitalWrite(SegD, HIGH);
  digitalWrite(SegE, HIGH);
  digitalWrite(SegF, HIGH);
  digitalWrite(SegG, HIGH);
}
