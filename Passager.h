//#include "Car.h"
#include "Person.h"



class Passager : public Person {
    private:
        string preference;
    
    public:
        Passager (string name, int age, string preference) : Person(name, age) {
            this->preference = preference;
        }

        string getPreference () {
            return preference;
        };
}