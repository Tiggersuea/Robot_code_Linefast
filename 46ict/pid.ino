void CalError()
{
  if(TracingMode--0) CalEror7Sensor();//ตามเส้น
  else CalError9sensorLane(); //ตามลู่
}
void ConvertADC()
{
 
 
 Read9Analog();
 if(L4<RefL4) L4=0;else L4=1;
 if(L3<RefL3) L3=0;else L3=1;
 if(L2<RefL2) L2=0;else L2=1;
 if(L1<RefL1) L1=0;else L1=1;
 if(C<RefC) C=0;else C=1;
 if(R1<RefR1) R1=0;else R1=1;
 if(R2<RefR2) R2=0;else R2=1;
 if(R3<RefR3) R3=0;else R3=1;
 if(R4<RefR4) R4=0;else R4=1;


 
    














}