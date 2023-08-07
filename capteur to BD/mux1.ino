const int controlPinMux1[4]={2,3,4,5};
const int muxTable[16][4]={
  //s0, s1, s2, s3    
  {0,0,0,0}, //channel 0
  {1,0,0,0}, //channel 1
  {0,1,0,0}, //channel 2
  {1,1,0,0}, //channel 3
  {0,0,1,0}, //channel 4
  {1,0,1,0}, //channel 5
  {0,1,1,0}, //channel 6
  {1,1,1,0}, //channel 7
  {0,0,0,1}, //channel 8
  {1,0,0,1}, //channel 9
  {0,1,0,1}, //channel 10
  {1,1,0,1}, //channel 11
  {0,0,1,1}, //channel 12
  {1,0,1,1}, //channel 13
  {0,1,1,1}, //channel 14
  {1,1,1,1}  //channel 15
};
int SIG_pin = A0; //A0

String sensorsArrayMux1[] = {
  "TDS", //eau nutriement
  "BNC", //eau PH
  "DS18B20", //eau temperature
  "FSIR02", //Qte eau
  "AM1011A", //temp ext + humidite monde 1
  "LDR", //lumiere monde 1
  "CCS811" //CO2 monde 1
};

void setupMux1(){
  for(int i =0;i<4;i++){
    pinMode(controlPinMux1[i], OUTPUT);
    digitalWrite(controlPinMux1[i], LOW);
  }
}
void sendData(String anArray[]);

void channelControlONMux1(int relayChannel){
  digitalWrite(controlPinMux1[0], muxTable[relayChannel][0]);
  digitalWrite(controlPinMux1[1], muxTable[relayChannel][1]);
  digitalWrite(controlPinMux1[2], muxTable[relayChannel][2]);
  digitalWrite(controlPinMux1[3], muxTable[relayChannel][3]);

  int valeur = analogRead(SIG_pin);

  //BNC eau PH
  if(relayChannel == 1){
    valeur = valeur * 5.0 / 1023.0; //return voltage
  }

  Serial.print("ON Mux1 channel ");
  Serial.print(relayChannel);
  Serial.print(" valeur ");
  Serial.println(String(valeur));

  // mettre analogRead(SIG_pin) dans le JSON envoye au Pi
  String anArray[] = {String(sensorsArrayMux1[relayChannel]), String(valeur)};
  sendData(anArray);
}