 
#define MOTOR1 8
#define MOTOR2 9
#define EN 10
#define POT 0
#define buzzer 13
int POT_VAL;
 
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(EN,OUTPUT);
  pinMode(MOTOR1,OUTPUT);
  pinMode(MOTOR2,OUTPUT);
 
}
 
void loop() {
    tone(buzzer,1000);
    delay(3000);
    noTone(buzzer);
    analogWrite(EN,130);
    digitalWrite(MOTOR1,HIGH);
    digitalWrite(MOTOR2,LOW);
  /*POT_VAL=analogRead(POT);
  //POT_VAL = map(POT_VAL, 0, 1023, 0, 255);
  //analogWrite(EN,POT_VAL);
  if(POT_VAL<(512)){
    POT_VAL = map(POT_VAL, 0, 512, 0, 255);  
    Serial.println(POT_VAL);
   analogWrite(EN,POT_VAL);
  digitalWrite(MOTOR1,HIGH);
  digitalWrite(MOTOR2,LOW);
    }else{
      POT_VAL = map(POT_VAL, 512, 1023, 0, 255);
      Serial.println(POT_VAL);
      analogWrite(EN,POT_VAL);
      digitalWrite(MOTOR1,LOW);
      digitalWrite(MOTOR2,HIGH);
 
      }
}*/
}
 
