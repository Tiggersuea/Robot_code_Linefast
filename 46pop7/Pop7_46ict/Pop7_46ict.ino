#include <pop7.h>	// POP-7 Board
int L3,L2,L1,C,R1,R2,R3;
int RefL3=500,RefL2=500,RefL1=500,RefC=500,RefR1=500,RefR2=500,RefR3=500;
int Leftspeed,Rightspeed;
int Error,Integral,Derivative,PreError;
int Kp=0.02,Ki=0.0000015,Kd=0.15;
void setup()  
{
  OK();
  
  sound(1000,100);
  setTextSize(2);
  Runmotor();
    
}
void loop()
{
   
   Show7analog(); 
    
  
}   
