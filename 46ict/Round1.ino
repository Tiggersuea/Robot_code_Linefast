void Round()
{
 if(Speed!=100)Round1();
 else Round1Special();

 
}
void Round1()
{
 ForwardSpeedTime(60,300);
 TracingMode=0;
 TracSpeedTime(Speed,3000);
 /*TracJCSpeed();
 TracingMode=1;
 TracSpeedTime(Speed,7000);
 TracJC();
 */

}
void Round1Special()
{
 ForwardSpeedTime(60,300);
 TracingMode=0;
 TracSpeedTime(100,400);
 TracSpeedTime(50,900);
 TracSpeedTime(100,2000);
 TracSpeedTime(50,1500);
 TracSpeedTime(100,300);
 TracJCSpeedTime(100,0);
 TracLeftDelay(100,10);

 TracingMode=1;//วิ่งตามลู่
 TracSpeedTime(100,400);
 TracSpeedTime(50,900);
 TracSpeedTime(100,2000);
 TracSpeedTime(50,1300);
 TracSpeedTime(100,300);
 TracJCSpeedTime(100,20);
 TracLeftDelay(100,10);




}