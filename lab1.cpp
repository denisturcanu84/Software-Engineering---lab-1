#include <iostream>
#include <string>
#include "Car.h"
#include "FuelCar.h"
#include "ElectricCar.h"
#include "Driver.h"
#include "Passager.h"

using namespace std;


int main(){
    Car *car1 = new ElectricCar(3);
    Car *car2 = new ElectricCar(2);
    Car *car3 = new FuelCar(4); 
    Car *car4 = new FuelCar(3);   
    
    Driver *driver1 = new Driver("Cosmin", 22, car2, 1);
    Driver *driver2= new Driver("Denis", 23, car1, 4);
    Passager *passager1 = new Passager("Andrei", 21, "Electric");
    Passager *passager2 = new Passager("Mihai", 20, "Fuel");
    Passager *passager3 = new Passager("Alex", 19, "Electric");
    Passager *passager4 = new Passager("Cristi", 18, "Fuel");
    car1->addPassager(passager1);
    car1->addPassager(passager2);
    car2->addPassager(passager3);
    car2->addPassager(passager4);

    cout << "Car 1: " << car1->getBrand() << " " << car1->getYear() << " " << car1->getType() << " " << car1->getPassangerCapacity() << endl;
    cout << "Car 2: " << car2->getBrand() << " " << car2->getYear() << " " << car2->getType() << " " << car2->getPassangerCapacity() << endl;



    
    return 0;
}