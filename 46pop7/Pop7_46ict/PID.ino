
 void Calerror()
 {
   convert7analog();
   if(L3==1&&L2==1&&L1==1&&C==1&&R1==1&&R2==1&&R3==0)
 Error=6;
   else if(L3==1&&L2==1&&L1==1&&C==1&&R1==1&&R2==0&&R3==0)
 Error=5;
   else if(L3==1&&L2==1&&L1==1&&C==1&&R1==1&&R2==0&&R3==1)
 Error=4;
   else if(L3==1&&L2==1&&L1==1&&C==1&&R1==0&&R2==0&&R3==1)
 Error=3;
   else if(L3==1&&L2==1&&L1==1&&C==1&&R1==0&&R2==1&&R3==1)
 Error=2;
   else if(L3==1&&L2==1&&L1==1&&C==0&&R1==0&&R2==1&&R3==1)
 Error=1;
   else if(L3==1&&L2==1&&L1==1&&C==0&&R1==1&&R2==1&&R3==1)
 Error=0;
   else if(L3==1&&L2==1&&L1==0&&C==0&&R1==1&&R2==0&&R3==1)
 Error=-1;
   else if(L3==1&&L2==1&&L1==0&&C==1&&R1==1&&R2==1&&R3==1)
 Error=-2;
   else if(L3==1&&L2==0&&L1==0&&C==1&&R1==1&&R2==1&&R3==1)
 Error=-3;
   else if(L3==1&&L2==0&&L1==1&&C==1&&R1==1&&R2==1&&R3==1)
 Error=-4;
   else if(L3==0&&L2==0&&L1==1&&C==1&&R1==1&&R2==1&&R3==1)
 Error=-5;
   else if(L3==0&&L2==1&&L1==1&&C==1&&R1==1&&R2==0&&R3==0)
 Error=-6;
   else if(L3==0&&L2==0&&L1==0&&C==0&&R1==0&&R2==0&&R3==0)
 Error=100;
   else if(L3==0&&L2==0&&L1==0&&C==0)Error=101;
   else if(C==0&&R1==0&&R2==0&&R3==0)Error=102;
 }
 void TracPID(int Motorspeed)
{
    int Output,LeftOutput,RightOutput,MaxSpeed=Motorspeed;
    TuneMotor(Motorspeed);
    Integral+=Error;
    Derivative=Error-PreError;
    Output=Kp*Error+Ki*Integral+Kd*Derivative;
    LeftOutput=Leftspeed+Output;
    RightOutput=Rightspeed-Output;
   
     if(LeftOutput  > MaxSpeed) LeftOutput  = MaxSpeed;
     if(RightOutput > MaxSpeed) RightOutput = MaxSpeed;
   
     if(LeftOutput  < -MaxSpeed) LeftOutput  = -MaxSpeed;
     if(RightOutput < -MaxSpeed) RightOutput = -MaxSpeed;
    
  
   motor(1,LeftOutput);
   motor(2,RightOutput);
   PreError=Error;
}
void TracJC(int Motorspeed,int time)
{
    Error=0;
    PreError=0;
    while(Error<100)
    {
        TracPID(Motorspeed);
        Calerror();
    }
   
    Forward(Motorspeed,time);
    //Motorstop(); 
}
void Calerror1()
{
    convert7analog();
    if(L3==1&&L2==1&&L1==1&&C==1&&R1==1&&R2==1&&R3==0) Error=6;
    else if(L3==1&&L2==1&&L1==1&&C==1&&R1==1&&R2==0&&R3==0) Error=5;
    else if(L3==1&&L2==1&&L1==1&&C==1&&R1==1&&R2==0&&R3==1) Error=4;
    else if(L3==1&&L2==1&&L1==1&&C==1&&R1==0&&R2==0&&R3==1) Error=3;
    else if(L3==1&&L2==1&&L1==1&&C==1&&R1==0&&R2==1&&R3==1) Error=2;
    else if(L3==1&&L2==1&&L1==1&&C==0&&R1==0&&R2==1&&R3==1) Error=1;
    else if(L3==1&&L2==1&&L1==1&&C==0&&R1==1&&R2==1&&R3==1) Error=0;
    else if(L3==1&&L2==1&&L1==0&&C==0&&R1==1&&R2==1&&R3==1) Error=-1;
    else if(L3==1&&L2==1&&L1==0&&C==1&&R1==1&&R2==1&&R3==1) Error=-2;
    else if(L3==1&&L2==0&&L1==0&&C==1&&R1==1&&R2==1&&R3==1) Error=-3;
    else if(L3==1&&L2==0&&L1==1&&C==1&&R1==1&&R2==1&&R3==1) Error=-4;
    else if(L3==0&&L2==0&&L1==1&&C==1&&R1==1&&R2==1&&R3==1) Error=-5;
    else if(L3==0&&L2==1&&L1==1&&C==1&&R1==1&&R2==1&&R3==1) Error=-6;
    else if(L3==0&&L2==0&&L1==0&&C==0&&R1==0&&R2==0&&R3==0) Error=100;
    //else if(L3==0&&L2==0&&L1==0&&C==0)Error=101;
    //else if(C==0&&R1==0&&R2==0&&R3==0)Error=102;
}
void TracPID1(int Motorspeed)
{
    int Output,LeftOutput,RightOutput,MaxSpeed=Motorspeed;
    TuneMotor(Motorspeed);
    Integral+=Error;
    Derivative=Error-PreError;
    Output=Kp*Error+Ki*Integral+Kd*Derivative;
    LeftOutput=Leftspeed+Output;
    RightOutput=Rightspeed-Output;
   
     if(LeftOutput  > MaxSpeed) LeftOutput  = MaxSpeed;
     if(RightOutput > MaxSpeed) RightOutput = MaxSpeed;
   
     if(LeftOutput  < -MaxSpeed) LeftOutput  = -MaxSpeed;
     if(RightOutput < -MaxSpeed) RightOutput = -MaxSpeed;
    
  
   motor(1,LeftOutput);
   motor(2,RightOutput);
   PreError=Error;
}
void TracJC1(int Motorspeed,int time)
{
    Error=0;
    PreError=0;
    while(Error<100)
    {
        TracPID1(Motorspeed);
        Calerror1();
    }
   
    Forward(Motorspeed,time);
    //Motorstop(); 
}
void Runmotor()
{
    TracJC(70,500);
    TracJC(70,500);
    TracJC(70,500);
    TracJC(70,500);
    TracJC(70,500);
    //Turnright();
    int i=0;
    while(i<43)
    {
        TracJC(80,500);
        i++;
        sleep(200);
//        lcd("i=%d",i);
    }  
    Turnleft();
    TracJC(70,500);
    TracJC1(70,0);
    Motorstop();      
}
