#include "Car.h"


class FuelCar : public Car {
    private:
        string fuel_type;
        int fuel_capacity;
        int fuel_consumption;
        string type;

        public:
        FuelCar () : type("Fuel") {};
        FuelCar(string brand, int year, int passanger_capacity, string fuel_type, int fuel_capacity, int fuel_consumption) : Car(brand, year, passanger_capacity) {
            this->fuel_type = fuel_type;
            this->fuel_capacity = fuel_capacity;
            this->fuel_consumption = fuel_consumption;
            type = "Fuel";
        };

        FuelCar (int passagers) : type("Fuel") {
            passanger_capacity = passagers;
        };

        string getType () override {
            return type;
        }

        string getFuelType () {
            return fuel_type;
        }
        
        int fuelCapacity () {
            return fuel_capacity;
        }

        int getFuelConsumption () {
            return fuel_consumption;
        }
        
        int getPassagerCapacity () {
            return passanger_capacity;
        }
};
