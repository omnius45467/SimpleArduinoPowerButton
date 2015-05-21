int buttonInput = 2;
int lightOutput = 13;
int buttonState = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(lightOutput, OUTPUT);
  pinMode(buttonInput, INPUT);
  digitalWrite(buttonInput, HIGH);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonState = digitalRead(buttonInput);
  
  if(buttonState ==HIGH){
  digitalWrite(lightOutput, LOW);
  
  }
  else{
  digitalWrite(lightOutput, HIGH);
  }
}
