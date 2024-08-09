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
 delay(500);
 oled.clear();
}