int Read_map(){
  bool OnLine = false;
 
  uint32_t Avg = 0; 
  uint16_t Sum = 0;

  for (uint8_t i=0;i<SensorCount;i++)
  {
     
    Sensor[i]=map(analog(i),500,2000,0,1000);
    if (Sensor[i]<300)Sensor[i]=0;
    else if (Sensor[i]>800)Sensor[i]=1000;
    // Serial.print(Sensor[i]);
  //Serial.print('\t');
  }

  for (uint8_t i = 0; i <SensorCount; i++)
  {
    int Value = Sensor[i];
    if (Value > 500) { OnLine = true; }
    if (Value > 50)
    {
      Avg += (uint32_t)Value * (i * 1000);
      Sum += Value;
    }
  }
  if (!OnLine)
  {

    if (LastPosition < (SensorCount - 1) * 1000 / 2)
    {
      if(!turn) return (SensorCount - 1) * 1000;
      else return 0;
    }
    else
    { 
      if(!turn) return 0;
      else return (SensorCount - 1) * 1000;
    }
    
  }

  LastPosition = Avg / Sum;
  return LastPosition;
  
 
}
void RealsensorValues(){
 
for(int i=0;i<SensorCount;i++){
Serial.print(analogRead(i));
Serial.print('\t');


}
Serial.println();
delay(200);
}
void Read (){
 oled.text(0,0,"%d",analog(0));
 oled.text(1,0,"%d",analog(1));
 oled.text(2,0,"%d",analog(2));
 oled.text(3,0,"%d",analog(3));
 oled.text(4,0,"%d",analog(4));
 oled.text(5,0,"%d",analog(5));
 oled.text(6,0,"%d",analog(6));
 oled.text(7,0,"%d",analog(7));
 oled.show();
 delay(200);
 oled.clear();
}
void Readmin_max(){
Max[0]=2500;
Max[1]=2000;
Max[2]=2500;
Max[3]=2500;
Max[4]=2500;
Max[5]=2500;
Max[6]=2500;
Max[7]=2500;

Min[0]=300;
Min[1]=300;
Min[2]=300;
Min[3]=300;
Min[4]=300;
Min[5]=300;
Min[6]=300;
Min[7]=300;

}

void Readmap(){
  Read_map();
 oled.text(0,0,"%d",Sensor[0]);
 oled.text(1,0,"%d",Sensor[1]);
 oled.text(2,0,"%d",Sensor[2]);
 oled.text(3,0,"%d",Sensor[3]);
 oled.text(4,0,"%d",Sensor[4]);
 oled.text(5,0,"%d",Sensor[5]);
 oled.text(6,0,"%d",Sensor[6]);
 oled.text(7,0,"%d",Sensor[7]);
 oled.show();
  delay(200);
oled.clear();
  }
