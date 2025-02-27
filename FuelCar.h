#include "Car.h"


class FuelCar : public Car {
    private:
        string fuel_type;
        int fuel_capacity;
        int fuel_consumption;
        string type;

        public:
        FuelCar () : type("Fuel") {};

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
