#include "CarCollection.h"

CarCollection::CarCollection(){
    
    headPtr = nullptr; 

}
CarCollection::addCar(Car newCar){

    CarNode * NewNode = new CarNode; 
    NewNode->CarData = newCar; 
    NewNode->next = headPtr;
    headPtr = NewNode; 

}
CarCollection::displayCar(string vin){

}
CarCollection::removeCar(string vin){

}