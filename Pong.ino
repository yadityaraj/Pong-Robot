uint8_t colpins[8]={2,3,4,5,6,7,8,9};
uint8_t rowpins[8]={22,24,26,28,30,32,34,36};
void setup() {
  // put your setup code here, to run once:
 for(int i=0;i<8;i++){
    pinMode(colpins[i],OUTPUT);
    pinMode(rowpins[i],OUTPUT);
 }
 Serial.begin(9600);
 for(int i=0;i<8;i++){
  digitalWrite(colpins[i], LOW);
  digitalWrite(rowpins[i], LOW);
 }
}

void glow(x,y){
  digitalWrite(rowpins[x], HIGH);
  int i=0;
  while(i!=y){
    digitalWrite(colpins[i],HIGH);
  }
}
}
void loop() {
  digitalWrite(rowpins[5], HIGH);


  
}
