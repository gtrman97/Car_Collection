#ifndef CAR_COLLECTION_H
#define CAR_COLLECTION_H

#include "Car.h"
#include <string> 

class CarCollection{
    private:
        struct CarNode{
            Car CarData; 
            CarNode * next; 
        };
    public:
        CarCollection();
        void addCar(Car newCar);
        string displayRecord(string vin); 
        void removeRecord(string vin); 
};
#endif