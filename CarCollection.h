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
        string displayCar(string vin); 
        void removeCar(string vin); 
    private:
        typedef CarNode * CarList;
        CarList headPtr; 
};
#endif