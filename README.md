# PlantumArduino
## Multiplexeur MUX - 4In/16out - CD74HC4067
![[image]](https://github.com/paullenoir/PlantumArduino/blob/test/Images/Muxconnexion.JPG) 

https://electropeak.com/learn/interfacing-cd74hc4067-16-channel-analog-digital-multiplexer-with-arduino/
filtre les 16 signaux pour que 1 seul rentre dans l'entree analogique A0

# Senseurs                                                                                                    
## AM1011A - Température extérieure + humidite Analogique
Capteur : condensateur sensible à l'humidité de haute qualité.
https://fr.aliexpress.com/item/1005004933303614.html?spm=a2g0o.productlist.main.75.fdc213a40AvTUE&algo_pvid=90365bd0-40c3-4818-9b83-70384c9e5bac&algo_exp_id=90365bd0-40c3-4818-9b83-70384c9e5bac-38&pdp_npi=3%40dis%21CAD%213.41%212.52%21%21%212.52%21%21%40211bea6216886054108527119d0791%2112000031067845621%21sea%21CA%210&curPageLogUid=puf4fGnOTbUC

Plage de mesure: (humidité) 0% ~ 99.9% hr (température) -40 ~ + 80 ° c
Précision: humidité: ± 3% hr
Temps de réponse: température: 6s humidité: 6s 1/e (63%)
Valeur d'atténuation: (température) <0.1 °C/an (humidité) <0.5% hr/an
Capteur: capteur d'humidité capacitif
Sortie d'humidité: 10K NTC
Tension de fonctionnement: cc: 4.75-5.25V
Signal de sortie: signal de tension analogique 0-3V

cable rouge alim 5v
cable noir ground
cable jaune humidity 0-3V
cable blanc temperature NTC10K

## HS1101 - Humidite Analogique
https://fr.aliexpress.com/item/1005002768824060.html?spm=a2g0o.productlist.main.7.77fb7220xWQw4r&algo_pvid=7bd94755-3065-4b57-8cf7-a86202a52abb&aem_p4p_detail=202307061346598846160596433570005666067&algo_exp_id=7bd94755-3065-4b57-8cf7-a86202a52abb-3&pdp_npi=3%40dis%21CAD%212.49%212.49%21%21%211.83%21%21%4021227f0f16886764194015467d077a%2112000022106031237%21sea%21CA%21910023713&curPageLogUid=OtM88Tg5E9xY&search_p4p_id=202307061346598846160596433570005666067_4
## HR31 HR202 - Humidite Analogique
https://fr.aliexpress.com/item/1005002457563705.html?spm=a2g0o.detail.0.0.2988LtGoLtGof3&gps-id=pcDetailTopMoreOtherSeller&scm=1007.40050.281175.0&scm_id=1007.40050.281175.0&scm-url=1007.40050.281175.0&pvid=cd9b799c-91e9-4a40-ae6a-41de87cfd935&_t=gps-id:pcDetailTopMoreOtherSeller,scm-url:1007.40050.281175.0,pvid:cd9b799c-91e9-4a40-ae6a-41de87cfd935,tpp_buckets:668%232846%238111%231996&pdp_npi=4%40dis%21CAD%211.97%211.46%21%21%211.44%21%21%402103249616911827176688166ed0c8%2112000020724089806%21rec%21CA%21910023713%21
https://www.volta.ma/produit/capteur-dhumidite-hr202/

## LM35 - Température extérieure analogique
https://www.volta.ma/capteur-de-temperature-analogique-lm35-avec-arduino/arduino/

## HR31 / HR202L - humdite analogique

## HS1101 MD1101  - humdite analogique
https://www.aliexpress.com/p/shoppingcart/index.html?spm=a2g0o.detail.0.0.69ad50a00AR0m8

## LDR - Lumière photorésistance analogique KY-018
Résistance dans la valeur change en fonction de la lumière ambiante
Nuit de pleinde lune → 0.5 lux
nuit éclairée → 20 - 70 lux
local de vie → 100 - 200 lux
appartement éclairé → 200 - 400 lux
local de travail → 200 - 3000 lux
stade de nuit → 150 - 1500 lux
exterieur ciel couvert → 500 - 25 000 lux
extérieur plein soeil → 50 000 - 100 000 lux
![[image]](https://github.com/paullenoir/PlantumArduino/blob/test/Images/Photoresistanceconnection.jpg) 
https://www.diyengineers.com/2021/02/25/ldr-sensor-tutorial-with-arduino-light-dependent-resistor/#:~:text=The%20Arduino%20Analog%20values%20range,an%20input%20voltage%20of%205V.

allumer le flash LED, ce qui se traduit par un niveau de tension pour Vp
cablage
https://arduino-france.site/capteur-luminosite/
https://jcinfotr.com/index.php?route=product/product&product_id=1463

## eau-Nutriment keyestudio testeur de qulite d'eau - Capteur TDS Arduino
https://fr.aliexpress.com/item/33050818416.html?spm=a2g0o.productlist.0.0.72197619m1mEOj&algo_pvid=01b35c64-3770-4710-a5f5-60fc97fe3d10&algo_expid=01b35c64-3770-4710-a5f5-60fc97fe3d10-3&btsid=0bb0624516142679756567310e13cf&ws_ab_test=searchweb0_0,searchweb201602_,searchweb201603_
https://www.youtube.com/watch?v=a4zfBkQ4LcE&ab_channel=ElectronicClinic

## eauPH - BNC
https://www.youtube.com/watch?v=zUEl3Y3yKL4&ab_channel=ElectronicClinic
po = data analogique

## eau-Temperature DS18B20


## eau-Qte eau FS IR02 juste on/OFF
https://wiki.dfrobot.com/Liquid_Level_Sensor-FS-IR02_SKU__SEN0205

## eau-Qte eau Home made et avec niveau d'eau
https://www.youtube.com/watch?v=40TjjWLljaU&t=742s&ab_channel=KRIS-%E0%B8%99%E0%B8%B2%E0%B8%A2%E0%B8%81%E0%B8%B4%E0%B8%94%E0%B8%8B%E0%B8%AD%E0%B8%A2.14
https://www.aliexpress.com/item/1005004594872552.html?pdp_npi=2%40dis%21CAD%21C%241.29%21C%241.02%21%21%21%21%21%402101ef8716908509621628263e6df1%2112000029765639549%21btf&_t=pvid:0d10b52b-498f-4755-8e10-06c6b6b3602c&afTraceInfo=1005004594872552__pc__pcBridgePPC__xxxxxx__1690850962&spm=a2g0o.ppclist.product.mainProduct


## CO2 - ENS160+AHT21 
https://www.aliexpress.com/item/1005005562822596.html?spm=a2g0o.productlist.main.55.4157ac4eQtjwgt&algo_pvid=e4d710d5-26ad-4c6c-9b6f-31258c2a6aaa&aem_p4p_detail=202307311740432811393654080760020264433&algo_exp_id=e4d710d5-26ad-4c6c-9b6f-31258c2a6aaa-27&pdp_npi=3%40dis%21CAD%2124.07%2112.03%21%21%2117.75%21%21%402101f49416908504430568308e471d%2112000033554711888%21sea%21CA%21910023713&curPageLogUid=so9HFlf7Lr4X&search_p4p_id=202307311740432811393654080760020264433_28
https://www.youtube.com/watch?v=C8Nm3d-Xe6E&ab_channel=PietroMezzaroba


## CO2 -- CCS811
https://wiki.keyestudio.com/KS0457_keyestudio_CCS811_Carbon_Dioxide_Air_Quality_Sensor
https://www.youtube.com/watch?v=sguU67kXgIg&t=206s&ab_channel=HowToElectronics
https://www.aliexpress.com/item/1005003980133652.html?spm=a2g0o.productlist.main.5.4157ac4eQtjwgt&algo_pvid=e4d710d5-26ad-4c6c-9b6f-31258c2a6aaa&aem_p4p_detail=202307311740432811393654080760020264433&algo_exp_id=e4d710d5-26ad-4c6c-9b6f-31258c2a6aaa-2&pdp_npi=3%40dis%21CAD%2114.36%2111.63%21%21%2110.59%21%21%402101f49416908504430568308e471d%2112000027627928948%21sea%21CA%21910023713&curPageLogUid=AF7SOVti1X2K&search_p4p_id=202307311740432811393654080760020264433_3




## Test
https://thingspeak.com/

# Action sur le monde Plantum I
## ventillation
## pulverisation eau + nutriment
## cycle jour nuit

# Action sur le monde Plantum II
## mettre eau
## mettre nutriment
## mettre CO2
## mettre de lhumidity
https://www.youtube.com/watch?v=NbHkHOqMG8Y&ab_channel=DKARDU

## Prise electrique intelligente
https://tutox.fr/2017/12/29/piloter-prises-electriques-arduino/
https://www.youtube.com/watch?v=Za5zBj7hjTk&ab_channel=LaurentMoutard


## Remplacer carte Arduino
https://www.youtube.com/watch?v=uDUp4cLXFrY&t=3s&ab_channel=thonain
https://fr.aliexpress.com/item/1005004274894736.html?spm=a2g0o.detail.0.0.717231f9Ttsoub&gps-id=pcDetailTopMoreOtherSeller&scm=1007.40000.327270.0&scm_id=1007.40000.327270.0&scm-url=1007.40000.327270.0&pvid=0a1d922c-c285-4368-8b97-7901d991239c&_t=gps-id:pcDetailTopMoreOtherSeller,scm-url:1007.40000.327270.0,pvid:0a1d922c-c285-4368-8b97-7901d991239c,tpp_buckets:668%232846%238111%231996&pdp_npi=3%40dis%21CAD%217.15%216.86%21%21%21%21%21%402101ead816909194251642578edee1%2112000028594749401%21rec%21CA%21910023713&search_p4p_id=202308011250252351252091476793531637_3

##############################################################################################
##############################################################################################
EQUIPEMENTS EAU
PH
https://www.amazon.ca/Kit-standard-hydroponique-Down-nutriments/dp/B07S1DFL3S/ref=sr_1_1_sspa?adgrpid=100703410276&hvadid=645651302082&hvdev=c&hvlocphy=9060806&hvnetw=g&hvqmt=e&hvrand=14725275478139784014&hvtargid=kwd-1672360603439&hydadcr=5706_13305171&keywords=ph+-+hydroponique&qid=1690580086&sr=8-1-spons&sp_csd=d2lkZ2V0TmFtZT1zcF9hdGY&psc=1
nutriement
https://www.amazon.ca/-/fr/AEROGROW-INTERNATIONAL-INC-Liquid-Nutrients/dp/B004M5NGJG/ref=sr_1_7?crid=3DEQME7AOOEV&keywords=nutriment+hydroponique&qid=1690580193&sprefix=nutriment+-+hydroponique%2Caps%2C87&sr=8-7
Pompe 5V
https://fr.aliexpress.com/item/1005005319201109.html?spm=a2g0o.productlist.main.5.791a210epaHvwC&algo_pvid=62cc142c-78e1-406b-8cb5-469f01cc13ad&aem_p4p_detail=202307281447397951578823457880006206005&algo_exp_id=62cc142c-78e1-406b-8cb5-469f01cc13ad-2&pdp_npi=3%40dis%21CAD%210.89%210.7%21%21%210.66%21%21%402103010f16905808594764977e6ba2%2112000032613311330%21sea%21CA%21910023713&curPageLogUid=7T4BwyEL3LZ4&search_p4p_id=202307281447397951578823457880006206005_3
modules de relais
https://www.amazon.ca/Huayao-modules-relais-optocoupleur-Raspberry/dp/B07DNB2NGD/ref=sr_1_1_sspa?adgrpid=66515214477&hvadid=645662673501&hvdev=c&hvlocphy=9060806&hvnetw=g&hvqmt=e&hvrand=15255420346205731693&hvtargid=kwd-311836571693&hydadcr=9391_13647510&keywords=module+relais+arduino&qid=1690580751&sr=8-1-spons&sp_csd=d2lkZ2V0TmFtZT1zcF9hdGY&psc=1
https://www.youtube.com/watch?v=Za5zBj7hjTk&ab_channel=LaurentMoutard
moteur ventilation 5V
https://fr.aliexpress.com/item/4001194295378.html?spm=a2g0o.detail.0.0.2ac9BYmdBYmdnv&gps-id=pcDetailTopMoreOtherSeller&scm=1007.40000.327270.0&scm_id=1007.40000.327270.0&scm-url=1007.40000.327270.0&pvid=5f95e951-e664-4b66-aef8-bb7aa0141a04&_t=gps-id:pcDetailTopMoreOtherSeller,scm-url:1007.40000.327270.0,pvid:5f95e951-e664-4b66-aef8-bb7aa0141a04,tpp_buckets:668%232846%238111%231996&pdp_npi=3%40dis%21CAD%211.56%211.55%21%21%21%21%21%402101c5c216905813599046301eba3d%2110000015263474494%21rec%21CA%21910023713&search_p4p_id=202307281455599317370263833253544770_2
lumiere
https://fr.aliexpress.com/item/1006697249.html?spm=a2g0o.productlist.main.7.43f94487JG2nXo&algo_pvid=9e4eac70-df9b-4bb6-afd7-6a38e92008a9&aem_p4p_detail=202307281457132499357825272880008675978&algo_exp_id=9e4eac70-df9b-4bb6-afd7-6a38e92008a9-3&pdp_npi=3%40dis%21CAD%2114.47%2110.12%21%21%2110.69%21%21%402103010f16905814336646767e6ba2%2112000033453817394%21sea%21CA%21910023713&curPageLogUid=vbFkBuAhyakf&search_p4p_id=202307281457132499357825272880008675978_4
gicleur eau
https://fr.aliexpress.com/item/1005005721317611.html?spm=a2g0o.productlist.main.67.7afe15afwdmdeB&algo_pvid=9350f1f9-8d79-4835-a94b-2e313bd8323d&aem_p4p_detail=202307281500302206408494771000009526485&algo_exp_id=9350f1f9-8d79-4835-a94b-2e313bd8323d-33&pdp_npi=3%40dis%21CAD%219.10%217.28%21%21%2148.22%21%21%402103010f16905816300722527e6ba2%2112000034116563091%21sea%21CA%21910023713&curPageLogUid=9v6sOlZIRTlK&search_p4p_id=202307281500302206408494771000009526485_34


##############################################################################################
##############################################################################################
## ESP-12E NODEMCU - Wifi
https://www.youtube.com/watch?v=dGrJi-ebZgI&ab_channel=MrDIY
https://www.youtube.com/watch?v=ge6NZAhZNjI&ab_channel=TechForFun

https://www.youtube.com/watch?v=ZAqNKaX3LQ0&ab_channel=GreatScott%21

## ESP8266 - Wifi ESP-01
![[image]](https://github.com/paullenoir/PlantumArduino/blob/test/Images/ESP8266connexion.JPG)
https://electronics-fun.com/esp8266-at-commands/
https://www.youtube.com/watch?v=25dPG9zw6yI&ab_channel=ShashiSoftronics
https://www.youtube.com/watch?v=z07zjfOHb8E&ab_channel=Equinoxe

https://forum.arduino.cc/t/solved-esp8266-and-cpistart-problem/647799/5
https://f-leb.developpez.com/tutoriels/arduino/esp8266/debuter/

## DHT11 - Température extérieure + humidité numerique
Dans Arduino installer les librairies "adafruit unified sensor" + "DHT sensor library" dans _Sketch > Include Library > Manage Libraries_
![[image]](https://github.com/paullenoir/PlantumArduino/blob/test/Images/DHT11.JPG)  
![[image]](https://github.com/paullenoir/PlantumArduino/blob/test/Images/DHT11connexion.JPG)