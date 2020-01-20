// test of the rotary selector switch

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int selSw = analogRead(A0);
  int ch = 0;
  if(selSw <= 50) {
    ch = 1;
  } else if(selSw <= 200) {
    ch = 2;
  } else if(selSw <= 350) {
    ch = 3;
  } else if(selSw <= 450) {
    ch = 4;
  } else if(selSw <= 600) {
    ch = 5;
  } else if(selSw <= 750) {
    ch = 6;
  } else if(selSw <= 900) {
    ch = 7;
  } else if(selSw <= 1023) {
    ch = 8;
  }
  Serial.println(ch);
}
