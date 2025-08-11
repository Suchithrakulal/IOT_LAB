const int ledpins[]={2,3,4,5,6};
const int numled=5;
void setup(){
  for(int i=0;i<numled;i++){
    pinMode(ledpins[i],OUTPUT);
  }
}
  void loop(){
    for(int i=0;i<numled;i=i+2){
      digitalWrite(ledpins[i],HIGH);
      delay(200);
      digitalWrite(ledpins[i],LOW);
      delay(200);
  }
    for(int i=1;i<numled;i=i+2)
    {
      digitalWrite(ledpins[i],HIGH);
      delay(200);
      digitalWrite(ledpins[i],LOW);
      delay(1000);
    }
  }