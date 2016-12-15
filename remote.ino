const int rn=9,rp=10,ln=5,lp=6;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(13,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);

}

void loop() {
  if (Serial.available()>0)
  {
    char a = Serial.read();
    if (a == 'w')//fw
    {
      digitalWrite(13,HIGH);
      Serial.println("fw");
      digitalWrite(rp,HIGH);
      digitalWrite(rn,LOW);
      digitalWrite(lp,HIGH);
      digitalWrite(ln,LOW);
      }
      else if (a =='s')//bw
      {
        digitalWrite(13,LOW);
        Serial.println("bw");
        digitalWrite(rn,HIGH);
      digitalWrite(rp,LOW);
      digitalWrite(ln,HIGH);
      digitalWrite(lp,LOW);
        }
      else if (a =='a')//lt
      {
        Serial.println("lt");
        digitalWrite(rp,HIGH);
      digitalWrite(rn,LOW);
      digitalWrite(lp,LOW);
      digitalWrite(ln,HIGH);
        }
      else if (a =='d')//rt
      {
        Serial.println("rt");
        digitalWrite(rp,LOW);
      digitalWrite(rn,HIGH);
      digitalWrite(lp,HIGH);
      digitalWrite(ln,LOW);
        }
      else if (a =='r')//st
      {
        Serial.println("stop");
        digitalWrite(rp,LOW);
      digitalWrite(rn,LOW);
      digitalWrite(lp,LOW);
      digitalWrite(ln,LOW);
        }
     
  }
  // put your main code here, to run repeatedly:

}
