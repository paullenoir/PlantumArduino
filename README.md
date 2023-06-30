# PlantumArduino
## ESP8266 - Wifi
![[image]](https://github.com/paullenoir/PlantumArduino/blob/test/Images/ESP8266connexion.JPG)

## Multiplexeur MUX - 4In/16out - CD74HC4067
![[image]](https://github.com/paullenoir/PlantumArduino/blob/test/Images/Muxconnexion.JPG) 

https://electropeak.com/learn/interfacing-cd74hc4067-16-channel-analog-digital-multiplexer-with-arduino/
filtre les 16 signaux pour que 1 seul rentre dans l'entree analogique A0

# Senseurs                                                                                                    
## DHT11 - Température extérieure + humidité
Dans Arduino installer les librairies "adafruit unified sensor" + "DHT sensor library" dans _Sketch > Include Library > Manage Libraries_
![[image]](https://github.com/paullenoir/PlantumArduino/blob/test/Images/DHT11.JPG)  ![[image]](https://github.com/paullenoir/PlantumArduino/blob/test/Images/DHT11connexion.JPG)

## DHT11 - Lumière photorésistance
Résistance dans la valeur change en fonction de la lumière ambiante
Nuit de pleinde lune → 0.5 lux
nuit éclairée → 20 - 70 lux
local de vie → 100 - 200 lux
appartement éclairé → 200 - 400 lux
local de travail → 200 - 3000 lux
stade de nuit → 150 - 1500 lux
exterieur ciel couvert → 500 - 25 000 lux
extérieur plein soeil → 50 000 - 100 000 lux
![[image]](https://github.com/paullenoir/PlantumArduino/blob/test/Images/Photoresistanceconnection.JPG) 

## Test
https://thingspeak.com/
