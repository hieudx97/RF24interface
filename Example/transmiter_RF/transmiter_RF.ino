#include "giaotieprf24.h"
giaotieprf24 giaotiep(9,10);
void setup(){ 
  //============================================================Module NRF24
 Serial.begin(9600);       
 giaotiep.caidattruyen(0xE8E8F0F0E1LL); //cài đặt địa chỉ phát
}
void loop(){
  giaotiep.truyendulieu(100);//truyền dữ liệu
  delay(500);
}
