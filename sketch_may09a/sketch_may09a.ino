int in1=11;
int in2=10;
int in3=9;
int in4=8;
int ena=13;
int enb=12;
int inter;


int speedPinA=13;
int speedPinB=12;

void setup()
{
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
  pinMode(in3,OUTPUT);
  pinMode(in4,OUTPUT);
  pinMode(ena,OUTPUT);
  pinMode(enb,OUTPUT);
  pinMode(2,INPUT);
  Serial.begin(9600);
  analogWrite(ena,255);
  analogWrite(enb,255);

}


void _mRight(int inl1,int inl2)
{
  digitalWrite(inl1,HIGH);
  digitalWrite(inl2,LOW);
}
void _mLeft(int inl3,int inl4)
{
  digitalWrite(inl3,LOW);
  digitalWrite(inl4,HIGH);
}
void _mStop(int pin1,int pin2,int pin3,int pin4)
{
  digitalWrite(pin1,LOW);
  digitalWrite(pin2,LOW);
  digitalWrite(pin3,LOW);
  digitalWrite(pin4,LOW);
}
 void _mGo(int inl1,int inl2)
{
  digitalWrite(inl1, HIGH);

  digitalWrite(inl2, HIGH);
  
}

 
void loop()
{
  inter = digitalRead(2);
  Serial.println(inter);
  if (inter == 1) {
    
   _mGo(in1,in4);
  
  }
  else{
    _mStop(in1,in2,in3,in4);
    
  }
}
