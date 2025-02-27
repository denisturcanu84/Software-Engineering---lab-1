#include <iostream>
#include <string>
using namespace std;

class Car {
    private:
        string brand;
        string type;
        int year;
        int passanger_capacity;
        Passager *passagers[];

    public:
        Car() {};
        
        virtual string getType (){
            return type;
        }

        virtual string getBrand {
            return brand;
        }
        
        virtual int getYear {
            return year;
        }

        virtual int getPassangerCapacity {
            return passanger_capacity;
        }
        
}