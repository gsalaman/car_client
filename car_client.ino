/*===================================================================
 * Library client example
 * 
 * This sketch uses the car library to manipulate various car objects.
 */

#include "car.h"

Car *audi;

void setup() 
{
  Car tesla;
  Car toyota(DIR_EAST);

  Serial.begin(9600);

  Serial.print("Tesla starting direction: ");
  Serial.println(tesla.getDir());
  Serial.print("Toyota starting direction: ");
  Serial.println(toyota.getDir());
  
  
  tesla.speedUp();
  toyota.turnRight();

  audi = new Car(DIR_SOUTH);
}

void loop() 
{
  if (audi->getSpeed() < 25)
  {
    audi->speedUp();
  }


  audi->turnRight();
  Serial.print("The Audi is now going ");
  Serial.println(getDirString(audi->getDir()));
  delay(2000);
  
}
