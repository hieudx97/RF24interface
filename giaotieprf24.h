#include <Arduino.h>
#include <RF24.h>
#include <SPI.h>

class giaotieprf24{
  private:
  int in1, in2;
  public:
  giaotieprf24(int in1, int in2);
  void caidattruyen(uint64_t pipe);
  void caidatnhan(uint64_t pipe);
  void truyendulieu(int msg);
  int nhandulieu();
};
