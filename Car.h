#include <iostream>
#include <string>
#include "Passager.h"
using namespace std;
class Car {
    private:
        string brand;
        int year;

    protected:
        string type;
        int passanger_capacity;
        Passager *passagers[4]; 

    public:
        Car() {};
        Car(string brand, int year, int passanger_capacity){
            this->brand = brand;
            this->year = year;
            this->passanger_capacity = passanger_capacity;
        };
        
        virtual string getType (){
            return type;
        };

        string getBrand() {
            return this->brand;
        };
        
         int getYear() {
            return year;
        };

        int getPassangerCapacity() {
            return passanger_capacity;
        };
        void addPassager(Passager* passager){
            for (int i = 0; i < 4; i++){
                if (passagers[i] == NULL){
                    passagers[i] = passager;
                    break;
                }
            }
        }
        
};