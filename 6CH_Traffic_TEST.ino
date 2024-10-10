#define RED_B 3
#define YELLOW_B 4
#define GREEN_B 5

#define RED_A 6
#define YELLOW_A 7
#define GREEN_A 8


void setup() {

delay(500);
 
pinMode(RED_A, OUTPUT);     // RED_A
pinMode(YELLOW_A, OUTPUT);  // YELLOW_A
pinMode(GREEN_A, OUTPUT);   // GREEN_A

pinMode(RED_B, OUTPUT);     // RED_B
pinMode(YELLOW_B, OUTPUT);  // YELLOW_B
pinMode(GREEN_B, OUTPUT);   // GREEN_B

digitalWrite(RED_A, LOW); 
digitalWrite(YELLOW_A, LOW); 
digitalWrite(GREEN_A, LOW); 

digitalWrite(RED_B, LOW); 
digitalWrite(YELLOW_B, LOW); 
digitalWrite(GREEN_B, LOW); 


}


void RED_A_ON (int delay_ms) {

digitalWrite(RED_A, HIGH); 
delay(delay_ms);  
}

void YELLOW_A_ON (int delay_ms) {

digitalWrite(YELLOW_A, HIGH); 
delay(delay_ms);  
}

void GREEN_A_ON (int delay_ms) {

digitalWrite(GREEN_A, HIGH); 
delay(delay_ms);  
}


void RED_A_OFF () {
  
digitalWrite(RED_A, LOW); 
}

void YELLOW_A_OFF () {
  
digitalWrite(YELLOW_A, LOW); 
}

void GREEN_A_OFF () {
  
digitalWrite(GREEN_A, LOW); 
}


// NEXT


void RED_B_ON (int delay_ms) {

digitalWrite(RED_B, HIGH); 
delay(delay_ms);  
}

void YELLOW_B_ON (int delay_ms) {

digitalWrite(YELLOW_B, HIGH); 
delay(delay_ms);  
}

void GREEN_B_ON (int delay_ms) {

digitalWrite(GREEN_B, HIGH); 
delay(delay_ms);  
}


void RED_B_OFF () {
  
digitalWrite(RED_B, LOW); 
}

void YELLOW_B_OFF () {
  
digitalWrite(YELLOW_B, LOW); 
}

void GREEN_B_OFF () {
  
digitalWrite(GREEN_B, LOW); 
}


void loop() {

RED_A_ON (0);
GREEN_B_ON(0);
delay(1000);
RED_A_OFF();
GREEN_B_OFF();
delay(100);

YELLOW_A_ON (0);
YELLOW_B_ON (0);
delay(1000);
YELLOW_A_OFF();
YELLOW_B_OFF();
delay(100);

GREEN_A_ON(0);
RED_B_ON(0);
delay(1000);
GREEN_A_OFF();
RED_B_OFF();
delay(100);

YELLOW_A_ON (0);
YELLOW_B_ON (0);
delay(1000);
YELLOW_A_OFF();
YELLOW_B_OFF();
delay(100);



  
}
