#include <CapacitiveSensor.h>
#define buzzer 11

// Set the Send Pin & Receive Pin.

CapacitiveSensor   cs_12_2 = CapacitiveSensor(12,2);       
CapacitiveSensor   cs_12_3 = CapacitiveSensor(12,3);        
CapacitiveSensor   cs_12_4 = CapacitiveSensor(12,4);    
CapacitiveSensor   cs_12_5 = CapacitiveSensor(12,5);    
CapacitiveSensor   cs_12_6 = CapacitiveSensor(12,6);     
CapacitiveSensor   cs_12_7 = CapacitiveSensor(12,7);       
CapacitiveSensor   cs_12_8 = CapacitiveSensor(12,8);   
CapacitiveSensor   cs_12_9 = CapacitiveSensor(12,9);    
CapacitiveSensor   cs_12_10 = CapacitiveSensor(12,10);  

void setup()                   
{
  // turn off autocalibrate on channel 1 - just as an example
  cs_12_2.set_CS_AutocaL_Millis(0xFFFFFFFF); 
  cs_12_3.set_CS_AutocaL_Millis(0xFFFFFFFF); 
  cs_12_4.set_CS_AutocaL_Millis(0xFFFFFFFF);
  cs_12_5.set_CS_AutocaL_Millis(0xFFFFFFFF);
  cs_12_6.set_CS_AutocaL_Millis(0xFFFFFFFF);
  cs_12_7.set_CS_AutocaL_Millis(0xFFFFFFFF);
  cs_12_8.set_CS_AutocaL_Millis(0xFFFFFFFF);
  cs_12_9.set_CS_AutocaL_Millis(0xFFFFFFFF);    
  cs_12_10.set_CS_AutocaL_Millis(0xFFFFFFFF);
}

void loop()                   
{
  // Set the sensitivity of the sensors.
  long touch1 =  cs_12_3.capacitiveSensor(500);
  long touch2 =  cs_12_4.capacitiveSensor(500);
  long touch3 =  cs_12_5.capacitiveSensor(500);
  long touch4 =  cs_12_6.capacitiveSensor(500);
  long touch5 =  cs_12_7.capacitiveSensor(500);
  long touch6 =  cs_12_8.capacitiveSensor(500);
  long touch7 =  cs_12_9.capacitiveSensor(500);
  long touch8 =  cs_12_10.capacitiveSensor(500);
  long touch9 =  cs_12_2.capacitiveSensor(500);
 
  // When we touched the sensor, the buzzer will produce a tone.
  if (touch1 > 500) {
    tone(buzzer, 261.63);
}

if (touch2 > 500) {
    tone(buzzer, 293.66); 
}

if (touch3 > 500) {
    tone(buzzer, 329.63); 
}

if (touch4 > 500) {
    tone(buzzer, 349.23); 

if (touch5 > 500) {
    tone(buzzer, 392.00); 
}

if (touch6 > 500) {
    tone(buzzer, 440.00); 
}

if (touch7 > 500) {
    tone(buzzer, 493.88); 
}

if (touch8 > 500) {
    tone(buzzer, 523.25); 
}

if (touch9 > 500) {
    tone(buzzer, 587.33); 
}

  // When we didn't touch it, no tone is produced.
  if (touch1<=500  &  touch2<=500  &  touch3<=500 & touch4<=500  &  touch5<=500  &  touch6<=500 &  touch7<=500 &  touch8<=500  &  touch9<=500)
    noTone(buzzer);
  delay(1); 
 }
