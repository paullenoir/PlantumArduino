#include <SoftwareSerial.h>

SoftwareSerial mySerial(0, 1); // RX, TX : Utilisez les broches appropriées pour votre configuration

void setupToPi() {
  mySerial.begin(9600); // Débit de communication série avec le Raspberry Pi
}

void sendData(String anArray[]) {
  // Construire la chaîne JSON à envoyer nom du capteur + valeur
  String json_data = "{"+ String(anArray[0]) +":" + String(anArray[1]) + "}\n";

  // Envoyer la chaîne JSON via la communication série (UART) au Raspberry Pi
  mySerial.print(json_data);
  Serial.print("Valeur envoyee au Pi: ");
  Serial.println(json_data);
}
