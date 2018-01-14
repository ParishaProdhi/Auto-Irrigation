void setup() {
  // put your setup code here, to run once:
   //pinMode(0,INPUT);
   pinMode(8,OUTPUT);
   pinMode(9,OUTPUT);
   pinMode(3,OUTPUT);
   pinMode(4,OUTPUT);
   Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
   int val=analogRead(0);
   Serial.println(val);
   delay(10);
   if (val>500)
   {
     digitalWrite(9,HIGH);
     digitalWrite(8,LOW);
     digitalWrite(3,HIGH);
     digitalWrite(4,LOW);
   }
   else if (val<500 & val>350)
   {
    digitalWrite(8,HIGH);
    digitalWrite(9,LOW);
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
   }
   else
   {
    digitalWrite(8,LOW);
    digitalWrite(9,LOW);
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
   }
}
