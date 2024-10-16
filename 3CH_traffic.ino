#define RED 3
#define YELLOW 4
#define GREEN 5


void setup() {
  
delay(750);

Serial.begin(9600);

pinMode(RED, OUTPUT);     // RED
pinMode(YELLOW, OUTPUT);  // YELLOW
pinMode(GREEN, OUTPUT);   // GREEN

digitalWrite(RED, LOW); 
digitalWrite(YELLOW, LOW); 
digitalWrite(GREEN, LOW); 

Serial.println(" ---------------------------------------------");
Serial.println("|                Programmable                 |");
Serial.println("|     3 Channel traffic Light Controller      |");
Serial.println("|                                             |");
Serial.println("|      110VAC ... 240VAC / 50HZ and 60HZ      |");
Serial.println("|           Load power up to 5 Apms           |");
Serial.println("|             MCU ATMEGA8 @ 16MHz             |");
Serial.println("|                                             |");
Serial.println("| Designed and assembled by www.IOTMUG.com    |");
Serial.println("|              15 OCT 2024                    |");
Serial.println(" ---------------------------------------------");

}


void RED_ON (int delay_ms) {

digitalWrite(RED, HIGH); 
delay(delay_ms);  
}

void YELLOW_ON (int delay_ms) {

digitalWrite(YELLOW, HIGH); 
delay(delay_ms);  
}

void GREEN_ON (int delay_ms) {

digitalWrite(GREEN, HIGH); 
delay(delay_ms);  
}


void RED_OFF () {
  
digitalWrite(RED, LOW); 
}

void YELLOW_OFF () {
  
digitalWrite(YELLOW, LOW); 
}

void GREEN_OFF () {
  
digitalWrite(GREEN, LOW); 
}


void loop() {

RED_ON (1000);   // RED light ON for 700ms
RED_OFF();

GREEN_ON(1000);    // GREEN light turn ON for 700ms
GREEN_OFF();

YELLOW_ON (1000);  // YELLOW light turn for ON 700ms
YELLOW_OFF();




  
}
