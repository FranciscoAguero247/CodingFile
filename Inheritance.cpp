#include <iostream>

class Vehicle{
public:
    std::string brand = "Ford";

    void horn(){
        std::cout << "Honk, honk\n";
    }
};
class Car: public Vehicle{
public:
    std::string model = "Mustang";
};


int main(){

    Car car;
    car.horn();
    std::cout << car.brand << " " << car.model;

    return 0;
}
