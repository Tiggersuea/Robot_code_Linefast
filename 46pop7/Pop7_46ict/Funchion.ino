void Motorstop()
{
  ao();
  sleep(10);
}
void TuneMotor(int Motorspeed)
{
  Leftspeed = Motorspeed - 50;
  Rightspeed = Motorspeed - 50;
}
void Forward(int Motorspeed,int time)
{
  TuneMotor(Motorspeed);
  motor(1, Leftspeed);
  motor(2, Rightspeed);
  sleep(time);
}
void Turnleft()
{
  Motorstop();
  tl(70);
  delay(170);
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
  tr(70);
  delay(170);
  convert7analog();
  while (R1 == 1)
  {
    convert7analog();

  }
  Motorstop();
}
