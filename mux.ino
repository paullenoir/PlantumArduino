const int muxSIG = 9;
const int muxS0 = 3;
const int muxS1 = 4;
const int muxS2 = 5;
const int muxS3 = 6;

void setup(){
    pinMode(muxSIG, OUTPUT);
    pinMode(muxS0, OUTPUT);
    pinMode(muxS1, OUTPUT);
    pinMode(muxS2, OUTPUT);
    pinMode(muxS3, OUTPUT);
    Serial.brgin(9600);
    delay(1000);
}

void loop(){
    //send 0101 = 5 en binaire pour selectionner output 5
    //S0 is LSB et S3 est MSB
    digitalWrite(muxS0, 1);
    digitalWrite(muxS1, 0);
    digitalWrite(muxS2, 1);
    digitalWrite(muxS3, 0);

    //select if the output will be high or low with SIG pin
    digitalWrite(muxSIG, HIGH);.
    delay(1000);
    digitalWrite(muxSIG, LOW);
    delay(1000);
}