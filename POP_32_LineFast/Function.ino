void PidTrack() {
  position = Read_map();
  sp = 60;
  KP = 0.023;
  KD = 0.8;
  KI = 0.00001;



  Pid();
}
void TrackCross() {
  position = Read_map()
    sp = 60;
  KP = 0.016;
  KD = 0.6;
  KI = 0.0001;
  while (Sensor[0] < 1000 || Sensor[7] < 1000) {
    position = Read_map();
    Pid();
  }  //อ่านค่าเส้นตัด
}
void SpeedUp(int MinSpeed, int TopSpeed, unsigned long TimeSpeed) {
  int Time = 0;

  Time = TimeSpeed;

  while (MinSpeed < TopSpeed) {
    StTime();


    MinSpeed += 1;
    sp = MinSpeed;

    if (MinSpeed > 40) {
      KP = 0.00595;
      KD = 0.0996;
      KI = 0.00000407;
    }

    else if (MinSpeed > 50) {
      KP = 0.00895;
      KD = 0.1096;
      KI = 0.00000407;
    }

    else if (MinSpeed > 60) {
      KP = 0.01295;
      KD = 0.1396;
      KI = 0.00000407;
    }

    else if (MinSpeed > 70 && MinSpeed < 81) {
      KP = 0.01595;
      KD = 0.1896;
      KI = 0.00000407;
    }

    else {
      KP = 0.01695;
      KD = 0.1996;
      KI = 0.00000407;
    }

    while (ReadTime() < Time) {

      position = Read_map();
      Pid();
    }
  }
}
void TrackTime(int Speed, float Kp, float kd, float ki, int Time) {
  StTime();
  sp = Speed;
  KP = Kp;
  KD = kd;
  KI = ki;

  while (ReadTime() < Time) {


    Pid();
  }
  AO();
}
void Right() {
  motor(1, 70);
  motor(2, -20);
  delay(120);
  TrackTime(40, 0.017, 0.16, 0.0001, 50);
}  //เลี้ยวขวา
void Left() {
  turn = false;
  motor(1, -50);
  motor(2, 70);
  delay(100);
  TrackTime(40, 0.017, 0.16, 0.0001, 50);
  turn = true;
}  //เลี้ยวซ้าย

void ReadCross(int cross) {
  TrackCross();
  while (count < cross) {
    RR();
    TrackCross();
    TrackTime(60, 0.016, 0.16, 0.00001, 60);
  }
  TrackTime(60, 0.016, 0.16, 0.00001, 60);
  ao();
}
void RR() {

  PidTrack(

  );
}
