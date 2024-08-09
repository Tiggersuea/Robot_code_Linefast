//#include<pop32.h>
int Speed,SlowSpeed , ACCSpeed ,BaseSpeed ,LeftBaseSpeed ,RightBaseSpeed ,TurnSpeed,MaxSpeed;//speed
int Errorn,PreError,Kp,Kd,Ki,BackLeftBaseSpeed,BackRightBaseSpeed; //moter 
int KpB,KdB,KtB,KiB;//pid
int RefL3,RefL2,RefL1,RefC,RefR1,RefR2,RefR3,SumError;//Ref L/R
int L3 ,L2, L1, C, R1 ,R2 ,R3 ;
int SW_Ok_Status,Error99check-0,digital_SW=0;
long Timer, Timer1,Timer2 ;
int Ref 
#define NO 0
#define yes 1

#define Mode0 0
#define Mode1 1
#define Mode2 2
#define Mode3 3
#define Mode4 4

#define WheelDrive 1 
#define SwitchTime 200 

int Mode-Mode0; 
int ErrorClear-0; // 0 เคลียร์ Error/ 1 ไม่ต้องเคลียร์ Error

int PidStatus=1; //0 เจอโค้งน้อยๆ / 1 เจอโค้งเยอะ
int JCStatus-0;  //0 เช็คเเยก / 1 ไม่เช็คเเยก  

int TracingMode-0; //0:วิ่งตา่มเส้น  


void setup() {
  waitSW_OK();
 sound(1000,100);
 DistanceRef =60;
 ACCSpeed =60;
 SlowSpeed =50;
 BaseSpeed = Speed;
 TurnSpeed = Speed;
 SonarSpeed =50;
 InitialSpeed();
 InitialRef();
 beep(0);
 oled.clear();
 oled.mode(0);
 oled.dim(true);
 oled.textSize(1);
 oled.text(0,0,"%d",analog(0));
 oled.text(1,0,"%d",analog(1));
 oled.text(2,0,"%d",analog(2));
 oled.text(3,0,"%d",analog(3));
 oled.text(4,0,"%d",analog(4));
 oled.text(5,0,"%d",analog(5));
 oled.text(0,0,"Starting");
 oled.text(1,0,"MOde=%d",Mode);
 oled.show();
 StartTime2();
 SelectSpeed();



 /*ForwardSpeedTime(BaseSpeed,1500);
 Finsish();*/

}

void loop() {
  //Read();
  Round();
  Finish();

}
