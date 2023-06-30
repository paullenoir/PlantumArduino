
#include <DHT.h>

int dhtPin = 2;
int dly = 1000;

#define DHT_TYPE DHT11

DHT dht(dhtPin, DHT11);

void setup(){
  Serial.begin(9600);

  dht.begin();
}

void loop(){

  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature();

  Serial.print("Temperature = ");
  Serial.print(temperature);
  Serial.print("\n");
  Serial.print("Humidity = ");
  Serial.print(humidity);
  delay(dly);
}