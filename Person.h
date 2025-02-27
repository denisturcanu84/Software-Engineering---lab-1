//#include "Car.h"

class Person {
    private:
        string name;
        int age;

    public: 
        Person (string name, int age) {
            this->name = name;
            this->age = age;
        }

       virtual string getName () {
            return name;
        }

       virtual int getAge () {
            return age;
        }

};