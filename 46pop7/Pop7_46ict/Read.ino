void Read7analog()
{
    L3=analog(0);
    L2=analog(1);
    L1=analog(2);
    C=analog (3);
    R1=analog(4);
    R2=analog(5);
    R3=analog(6);
}
void Show7analog()
{
    Read7analog();
    //lcd("L3=%d L2=%d L1=%d C=%d R1=%d R2=%d R3=%d",L3,L2,L1,C,R1,R2,R3 );
}
void convert7analog()
{
    Read7analog();
    if(L3<RefL3) L3=0; else L3=1;
    if(L2<RefL2) L2=0; else L2=1;
    if(L1<RefL1) L1=0; else L1=1;
    if(C<RefC)   C=0;  else C=1;
    if(R1<RefR1) R1=0; else R1=1;
    if(R2<RefR2) R2=0; else R2=1;
    if(R3<RefR3) R3=0; else R3=1;
}
