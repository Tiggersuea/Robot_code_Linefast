void Motorstop()
{
  ao();
  delay(10);
}
void TuneMotor()
{
  Leftspeed = Motorspeed - 0;
  Rightspeed = Motorspeed - 0;
}
void Forward(int Motorspeed, int time)
{
  TuneMotor(Motorspeed);
  motor(1, Leftspeed);
  motor(2, Rightspeed);
  sleep(time);
}
void Turnleft()
{
  Motorstop();
  sl(50);
  sleep(170);
  convert7analog();
  while (C == 1)
  {
    convert7analog();
  }
  Motorstop();
}
void Turnright()
{
  Motorstop();
  sr(50);
  delay(170);
  convert7analog();
  while (R1 == 1)
  {
    convert7analog();

  }
  //Moterstop();
}
void UTurn()
{
  Motorstop();
  sr(50);
  delay(170);
  convert7analog();
  while (R1 == 1)
  {
    convert7analog();
  }
  Motorstop();

}
 void  Motorspeed ()
 {


   

  
 }
