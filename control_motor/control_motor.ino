//front right
const int FRpwm = A0 ;  
const int FRin1 = 22 ;
const int FRin2 = 24 ;

//front left
const int FLpwm = A1 ;  
const int FLin1 = 26 ;
const int FLin2 = 28 ;

//rear right
const int RRpwm = A2 ;  
const int RRin1 = 30 ;
const int RRin2 = 32 ;

//rear left
const int RLpwm = A3 ;  
const int RLin1 = 34 ;
const int RLin2 = 36 ;


void setup()
{
pinMode(FRpwm,OUTPUT) ;   //we have to set PWM pin as output
pinMode(FRin1,OUTPUT) ;  //Logic pins are also set as output
pinMode(FRin2,OUTPUT) ;
pinMode(FLpwm,OUTPUT) ;   //we have to set PWM pin as output
pinMode(FLin1,OUTPUT) ;  //Logic pins are also set as output
pinMode(FLin2,OUTPUT) ;
pinMode(RRpwm,OUTPUT) ;   //we have to set PWM pin as output
pinMode(RRin1,OUTPUT) ;  //Logic pins are also set as output
pinMode(RRin2,OUTPUT) ;
pinMode(RLpwm,OUTPUT) ;   //we have to set PWM pin as output
pinMode(RLin1,OUTPUT) ;  //Logic pins are also set as output
pinMode(RLin2,OUTPUT) ;
}

void loop()
{
//For Clock wise motion , in1 = High , in2 = Low

digitalWrite(FRin1,HIGH) ;
digitalWrite(FRin2,LOW) ;
analogWrite(FRpwm,255) ;

//Clockwise for 3 secs
delay(3000) ;     

//For brake
digitalWrite(FRin1,HIGH) ;
digitalWrite(FRin2,HIGH) ;
delay(2000) ;

//For Anti Clock-wise motion - IN_1 = LOW , IN_2 = HIGH
digitalWrite(FRin1,LOW) ;
digitalWrite(FRin2,HIGH) ;
delay(3000) ;

//For brake
digitalWrite(FRin1,HIGH) ;
digitalWrite(FRin2,HIGH) ;
delay(2000) ;
 }
