#include "Car.h"

class ElectricCar : public Car {
    private:
        int battery_capacity;
        int range;
        string type;

        public:
        ElectricCar () {
            type = "Electric";
        };
        ElectricCar(string brand, int year, int passanger_capacity, int battery_capacity, int range) : Car(brand, year, passanger_capacity) {
            this->battery_capacity = battery_capacity;
            this->range = range;
            type = "Electric";
        };
        

        ElectricCar (int passagers) : type("Electric") {
            passanger_capacity = passagers;
        };

        string getType () override {
            return type;
        }

        int getPassagerCapacity () {
            return passanger_capacity;
        }
};
