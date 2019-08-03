#include "giaotieprf24.h"
giaotieprf24::giaotieprf24(int in1, int in2): in1(in1), in2(in2) {}
void giaotieprf24::caidattruyen(uint64_t pipe)
{
  RF24 radio(in1, in2);
  radio.begin();   
  radio.setAutoAck(1);               
  radio.setRetries(1,1);             
  radio.setDataRate(RF24_1MBPS);    // Tốc độ truyền
  radio.setPALevel(RF24_PA_MAX);      // Dung lượng tối đa
  radio.setChannel(10);               // Đặt kênh
  radio.openWritingPipe(pipe);        // mở kênh
}
void giaotieprf24::caidatnhan(uint64_t pipe)
{
  RF24 radio(in1, in2);
  radio.begin();                
  radio.setAutoAck(1);              
  radio.setDataRate(RF24_1MBPS);   
  radio.setChannel(10);
  radio.openReadingPipe(1, pipe);     
  radio.startListening();
}
void giaotieprf24::truyendulieu(int msg)
{
  RF24 radio(in1, in2);
  radio.write(&msg, sizeof(msg));
} 
int giaotieprf24::nhandulieu()
{
  RF24 radio(in1, in2);
  int msg;
  if (radio.available()){
    while (radio.available())
      {radio.read(&msg, sizeof(msg));}
  }
  return msg;  
}