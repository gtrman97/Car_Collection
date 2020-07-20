#include "CarCollection.h"

CarCollection::CarCollection(){
    
    headPtr = nullptr; 

}
void CarCollection::addCar(Car newCar){

    CarNode * NewNode = new CarNode; 
    NewNode->CarData = newCar; 
    NewNode->next = headPtr;
    headPtr = NewNode; 

}
string CarCollection::displayCar(string _vin){

    CarNode * loopPtr = headPtr;
    while(loopPtr != nullptr && loopPtr->CarData.getVin() != _vin){
        loopPtr = loopPtr->next; 
    }
    if(loopPtr == nullptr){
        return "Car not found"; 
    } else {
        string display =  std::to_string(loopPtr->CarData.getYear()); 
        return display; 
    }

}
void CarCollection::removeCar(string vin){

}