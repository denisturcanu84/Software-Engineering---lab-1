#include <Person.h>
#include <Car.h>

class Driver : public Person {
    private:
        Car *car;
        int driving_experience;

    public:
        Driver (string name, int age, Car *car, int driving_experience) : Person(name, age) {
            this->car = car;
            this->driving_experience = driving_experience;
        }

        Car *getCar () {
            return car;
        }

        int getDrivingExperience () {
            return driving_experience;
        }
}