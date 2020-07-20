#ifndef CAR_H
#define CAR_H

#include <string> 
using std::string; 

class Car{
    public:
        Car();
        Car(string _make, string _model, string vin, int year); 
        //~Car();
        void setMake(string _make);
        string getMake();
        void setModel(string _model);
        string getModel();
        void setYear(int _year);
        int getYear();
    private:
        string make;
        string model; 
        string vin; 
        int year; 
};

#endif 