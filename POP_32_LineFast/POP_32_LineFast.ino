#include<POP32.h>
int Last_value = 0;
int error = 0;
int integral = 0;
int differencial = 0;
int Last_error = 0;
const uint32_t setpoint = 3500;
int Min[8];
int Max[8];
float KP=0;
float KD=0;
double KI=0;
int sp=0;
bool turn = true;
//////////////////////// Time
 int Time0,BaseTime0;
 int count=0;

const uint8_t SensorCount = 8;

int Kspeed,Ktime;
int Sensor[SensorCount];
bool Knb=false;
int position =0;
int Rmotor , Lmotor ;
float Kperror;
uint32_t LastPosition;

void setup() {
  // put your setup code here, to run once:
  //Serial.begin(115200);
  //waitSW_OK();
//fd(100);delay(500);
//SpeedUp(40,80,2);
//ReadCross(2);

//for (int i=0;i<SensorCount;i++){
//Min[i]=analogRead(i);
waitSW_OK();
sound(1000,100);
//fd(100);
pop();

    
}
void loop()
{
//Read();
//Pid();

}
