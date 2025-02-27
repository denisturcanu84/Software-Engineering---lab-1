#include <Car.h>

class Person {
    private:
        string name;
        int age;

    public: 
        Person (string name, int age) {
            this->name = name;
            this->age = age;
        }

        string getName () {
            return name;
        }

        int getAge () {
            return age;
        }

}