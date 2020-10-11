#include <SPI.h>

bool PRINT_NUMBERS = true;
bool PRINT_HEX = false;
struct SpiData {
  uint32_t valueA;
  uint32_t valueB;
  uint32_t valueC;
  uint32_t valueD;
};

uint8_t data[4*4];

void setup() {
  Serial.begin(115200);
  delay(1000);
  pinMode(10, OUTPUT);
  SPI.begin();
}

void readSensor() {
    memset(&data, 0, sizeof(data));
    SPI.transfer(&data, sizeof(data));
    struct SpiData* reading = (SpiData*) &data;
    if (PRINT_NUMBERS) {
      Serial.print(   
        String(reading->valueA) +", "+
        String(reading->valueB) +", "+
        String(reading->valueC) +", "+
        String(reading->valueD) +", " 
      );
    }
    if (PRINT_HEX) {
      Serial.print(reading->valueA, HEX);
      Serial.print(reading->valueB, HEX);
      Serial.print(reading->valueC, HEX);
      Serial.print(reading->valueD, HEX);
    }
}

void loop() {
    digitalWrite(10, LOW);
    SPI.beginTransaction(SPISettings(1000000, MSBFIRST, SPI_MODE0));
    for (int i=0; i < 5; i++){
      readSensor();
    }
    Serial.println();
    SPI.endTransaction();
    digitalWrite(10, HIGH);
    delay(33);
}
