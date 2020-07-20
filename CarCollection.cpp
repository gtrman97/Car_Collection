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
CarCollection::displayCar(string _vin){

    CarNode * loopPtr = headPtr;
    while(loopPtr != nullptr && loopPtr->CarData.getVin() != _vin){
        loopPtr = loopPtr->next; 
    }
    if(loopPtr == nullptr){
        return "Car not found"; 
    }

}
CarCollection::removeCar(string vin){

}