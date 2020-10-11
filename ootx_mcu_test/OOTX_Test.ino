#include <SPI.h>

uint8_t data[68];

void setup() {
  Serial.begin(115200);
  delay(1000);
  pinMode(10, OUTPUT);
  SPI.begin();
}

void PrintHex8(uint8_t *data, uint8_t length, uint8_t offset) // prints 8-bit data in hex with leading zeroes
{
       for (int i=offset; i<length-offset; i++) { 
         if (data[i]<0x10) {Serial.print("0");} 
         Serial.print(data[i],HEX); 
       }
}

void readOotx(unsigned int offset) {
    memset(&data, 0, sizeof(data));
    data[0] = offset;
    digitalWrite(10, LOW);
    SPI.beginTransaction(SPISettings(1000000, MSBFIRST, SPI_MODE0));
    SPI.transfer(&data, sizeof(data));
    PrintHex8(data, sizeof(data)-1, 1);
    SPI.endTransaction();
    digitalWrite(10, HIGH);
    Serial.println();
}

void loop() {
    Serial.print("0: ");
    readOotx(80);
    Serial.print("1: ");
    readOotx(80+64);
    delay(2000); 
}
