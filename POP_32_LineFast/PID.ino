void Pid()
{  sp=60;
   KP=0.025;
   KD=0.8;                     
   KI=0.0001;
    int P=Read_map();
    error =P-3500;
   
    integral += error;
    
    differencial = (error * KP) + ((error - Last_error) *KD )+ (integral * KI);
    Last_error = error;
    Lmotor = sp + differencial;
    Rmotor = sp - differencial;   
               
    if(Lmotor > 60) Lmotor = 60 ;
    else if(Lmotor < 0) Lmotor = 0;

    if(Rmotor > 60) Rmotor = 60 ;
    else if(Rmotor < 0) Rmotor = 0;
    
    motor(1,Lmotor);
    motor(2,Rmotor);
}


    
