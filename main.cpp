#include "main.h"


int main(){

    Car car1("Toyota", "Corolla", "4Y1SL65848Z411439", 2010); 
    cout << car1.getYear() << " " << car1.getMake() << " " << car1.getModel() << endl; 

    return 0; 
}