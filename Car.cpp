#include "Car.h" 

Car::Car(){
    setMake("");
    setModel("");
    setYear(0);
}
Car::Car(string _make, string _model, int _year){
    setMake(_make);
    setModel(_model);
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
void Car::setYear(int _year){
    year = _year; 
}
int Car::getYear(){
    return year; 
}