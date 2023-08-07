
int loopDelay = 5000; //5s
int mainDelay = (1000 * 60 * 5) - (7 * loopDelay); //5min - temps pour chaque capteur pour un interval de 5min pour un meme capteur
String sensorsArrayMux0[] = {
  "TDS", //eau nutriement
  "BNC", //eau PH
  "DS18B20", //eau temperature
  "FSIR02", //Qte eau
  "AM1011A", //temp ext + humidite monde 1
  "LDR", //lumiere monde 1
  "CCS811" //CO2 monde 1
};
void setupMux1();
void channelControlONMux1(int relayChannel);
void channelControlOFFMux1(int relayChannel);

void setupToPi();

void setup() {
  Serial.begin(9600);
  setupMux1();
  setupToPi();
}

void loop() {
  /*for(int i = 0; i < sizeof(sensorsArrayMux0); i++){
    channelControlONMux1(i);
    delay(loopDelay);
  }
  */

  channelControlONMux1(4); //temperature / humidite
  //channelControlONMux1(5); //lumiere
  //Serial.println(String(analogRead(A5)));
  //delay(loopDelay);
  delay(mainDelay);
}
