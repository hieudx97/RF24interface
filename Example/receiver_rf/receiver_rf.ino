#include "giaotieprf24.h"
giaotieprf24 giaotiep(9,10);
void setup(){
   Serial.begin(9600);  
   giaotiep.caidatnhan(0xE8E8F0F0E1LL);
}
 
void loop(){
  Serial.println(giaotiep.nhandulieu());
  delay(500);
}
