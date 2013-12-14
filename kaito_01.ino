void setup(){
  Serial.begin(9600);
}
boolean up = true;
int i = 0;

void loop(){
  if(up){
    i++;
    delay(10);
  }
  else{
    i--;
    delay(10);
  }
  analogWrite(11,i);
  Serial.println(i);
  if(i==255)up=false;
  if(i==0)up=true;
}

