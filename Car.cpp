#include "Car.h" 

Car::Car(){
    setMake("");
    setModel("");
    setYear(0);
}
Car::Car(string _make, string _model, string _vin, int _year){
    setMake(_make);
    setModel(_model);
    setVin(_vin); 
    setYear(_year);
}
void Car::setMake(string _make){
    make = _make;
}
string Car::getMake(){
    return make; 
}
void Car::setModel(string _model){
    model = _model;
}
string Car::getModel(){
    return model; 
}
void Car::setVin(string _vin){
    vin = _vin; 
}
string getVin(){
    return vin; 
}
void Car::setYear(int _year){
    year = _year; 
}
int Car::getYear(){
    return year; 
}