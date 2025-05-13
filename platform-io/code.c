// Define input pins
const int A = 2;
const int B = 3;
const int C = 4;
const int D = 5;

// Define output pin
const int Y = 13;

void setup() {
  pinMode(A, INPUT);
  pinMode(B, INPUT);
  pinMode(C, INPUT);
  pinMode(D, INPUT);
  pinMode(Y, OUTPUT);
}

void loop() {
  // Read inputs
  int a = digitalRead(A);
  int b = digitalRead(B);
  int c = digitalRead(C);
  int d = digitalRead(D);

  // Logic gates
  int ab = a & b;
  int cd = c & d;
  int orResult = ab | cd;
  int y = !orResult;  // NOT (AB + CD)

  // Output result
  digitalWrite(Y, y);
}
