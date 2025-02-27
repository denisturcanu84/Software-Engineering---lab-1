#include <Car.h>


class fuelCar : public Car {
    private:
        string fuel_type;
        int fuel_capacity;
        int fuel_consumption;

        public:
        fuelCar () : type("Fuel") {};

        fuelCar (int passagers) : type("Fuel") {
            passanger_capacity = passagers;
        };

        string getType () override {
            return type;
        }

        string getFuelType () {
            return fuel_type;
        }
        
        string fuelCapacity () {
            return fuel_capacity;
        }

        int getFuelConsumption () {
            return fuel_consumption;
        }
        
        int getPassagerCapacity () {
            return passanger_capacity;
        }
}
