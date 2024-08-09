void IntialRef()
{//ใส่ค่าสี
  RefL4=
  RefL3=
  RefL2=
  RefL1=
  RefC=
  RefR3=
  RefR2=
  REfR1=
  REfR4=
}  
void InitaiSpeed()
{ 
  MaxSpeed=100;
  KI=0;
  if(ErrorClear==0){
    Eror=0;
    PreEroror=;
  }
  KIB=;
  if(BaseSpeed<=50){
    LeftBaseSpeed=BaseSpeed-0;
    RightBaseSpeed=BaseSpeed-0;
    BackLeftBaseSpeed=BaseSpeed-0;
    BackRightBaseSpeed=BaseSpeed-0;
    KP=12;
    KD=40;
    KT=8;
    KPB=10;
    KDB=50;
    KTB=10;

  }
 else if(BaseSpeed<=60){
    LeftBaseSpeed=BaseSpeed-0;
    RightBaseSpeed=BaseSpeed-0;
    BackLeftBaseSpeed=BaseSpeed-0;
    BackRightBaseSpeed=BaseSpeed-0;
    KP=13;
    KD=40;
    KT=10;
    KPB=11;
    KDB=50;
    KTB=10;
  }
   else if(BaseSpeed<=70){
    LeftBaseSpeed=BaseSpeed-0;
    RightBaseSpeed=BaseSpeed-0;
    BackLeftBaseSpeed=BaseSpeed-0;
    BackRightBaseSpeed=BaseSpeed-0;
    KP=15;
    KD=40;
    KT=10;
    KPB=12;
    KDB=60;
    KTB=10;
  }
   else if(BaseSpeed<=80){
    LeftBaseSpeed=BaseSpeed-0;
    RightBaseSpeed=BaseSpeed-1;
    BackLeftBaseSpeed=BaseSpeed-0;
    BackRightBaseSpeed=BaseSpeed-0;
    KP=16;
    KD=40;
    KT=10;
    KPB=13;
    KDB=70;
    KTB=10;
  }
   else if(BaseSpeed<=90){
    LeftBaseSpeed=BaseSpeed-0;
    RightBaseSpeed=BaseSpeed-1;
    BackLeftBaseSpeed=BaseSpeed-0;
    BackRightBaseSpeed=BaseSpeed-0;
    KP=13;
    KD=40;
    KT=10;
    KPB=11;
    KDB=50;
    KTB=10;
  }
   else {
    LeftBaseSpeed=BaseSpeed-0;
    RightBaseSpeed=BaseSpeed-1;
    BackLeftBaseSpeed=BaseSpeed-0;
    BackRightBaseSpeed=BaseSpeed-0;
    KP=18;
    KD=50;
    KT=10;
    KPB=15;
    KDB=90;
    KTB=10;
  }


}
