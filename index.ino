int buton = 7; 
int led = 9; 
void setup() { 
pinMode(buton, INPUT); 
pinMode(led, OUTPUT); } 
void loop(){ 
if (digitalRead(buton) == HIGH) { 
digitalWrite(led, HIGH);} 
else { 
 digitalWrite(led, LOW); }}
