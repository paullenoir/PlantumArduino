#include <SoftwareSerial.h>
#define RX 12 //TX of esp8266 is connected with Arduino PIN 12
#define TX 13 //RX of esp8266 is connected with Arduino PIN 13

String WIFI_SSID = "BELL335";
String WIFI_PWD = "F9741D33117F";
String API_KEY = "JIJJADG375302Y2D"; //WRITE API KEY
String HOST = "api.thingspeak.com";
String PORT = "80";

int countTrueCommand = 0;
int countTimeCommand = 0; 
boolean found = false;  

SoftwareSerial esp8266(RX,TX); 

void setup(){
  Serial.begin(115200);
  esp8266.begin(115200);
  sendCommand("AT",5,"OK");
  sendCommand("AT+CWMODE=1",5,"OK");
  sendCommand("AT+CWJAP=\""+ WIFI_SSID +"\",\""+ WIFI_PWD +"\"",20,"OK");
}

void loop() {
  int valeur = analogRead(A0); //valeur retourne par le multiplexeur mux
  Serial.println(valeur);

  String getData = "GET /update?api_key="+ API_KEY +"&field1="+valeur;
  sendCommand("AT+CIPMUX=1",5,"OK");
  sendCommand("AT+CIPSTART=0,\"TCP\",\""+ HOST +"\","+ PORT,15,"OK");
  sendCommand("AT+CIPSEND=0," +String(getData.length()+4),4,">");
  esp8266.println(getData);
  delay(1500);
  countTrueCommand++;
  sendCommand("AT+CIPCLOSE=0",5,"OK");
}

void sendCommand(String command, int maxTime, char readReplay[]) {
  Serial.println(countTrueCommand);
  Serial.print(". at command => ");
  Serial.print(command);
  Serial.print(" ");
  while(countTimeCommand < (maxTime*1)){
    esp8266.println(command);//at+cipsend
    if(esp8266.find(readReplay))//ok
    {
      found = true;
      break;
    }
    countTimeCommand++;
  } 
  if(found == true){
    Serial.println("OK");
    countTrueCommand++;
    countTimeCommand = 0;
  }

  if(found == false){
    Serial.println("Fail");
    countTrueCommand = 0;
    countTimeCommand = 0;
  } 
  found = false;
 }



#include <ESP8266HTTPClient.h>
#include <ESP8266WiFi.h>
#include <ArduinoJson.h>

const char* SERVER_IP = "121.0.0.1";
const int SERVER_PORT = 8000;

void setup() {
  // Initialisation du Wi-Fi
  WiFi.begin(WIFI_SSID, WIFI_PWD);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Connecting to WiFi...");
  }
  Serial.println("Connected to WiFi");

  // Initialisation de la liaison série
  Serial.begin(115200);
}

void loop() {
  int valeur = analogRead(A0); // Valeur retournée par la broche A0
  Serial.println(valeur);

  // Création du JSON
  StaticJsonDocument<200> jsonDocument;
  jsonDocument["time"] = millis();
  jsonDocument["valeur"] = valeur;

  // Conversion du JSON en String
  String jsonString;
  serializeJson(jsonDocument, jsonString);
  Serial.println(jsonString);

  // Création de l'URL avec les paramètres JSON
  String url = "http://" + String(SERVER_IP) + ":" + String(SERVER_PORT) + "/sensor?data=" + jsonString;

  // Création de la requête HTTP GET
  HTTPClient http;
  http.begin(url);
  int httpResponseCode = http.GET();

  // Vérification de la réponse
  if (httpResponseCode > 0) {
    String response = http.getString();
    Serial.println("HTTP Response: " + response);
  } else {
    Serial.println("Error sending HTTP request. Error code: " + String(httpResponseCode));
  }

  // Fermeture de la connexion
  http.end();

  delay(5000); // Attente de 5 secondes avant l'envoi de la prochaine valeur
}
