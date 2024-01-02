#include <iostream>
#include <string>

class Car{
    public:
        int year;
        std::string make, model;

};

int main(){
    std::string name;
    std::cout << "Type in your name: \n";
    getline(std::cin , name);
    std::cout << name << "\n";

    Car car1;
    Car car2;
    Car car3;

    car1.year = 2015;
    car1.make = "Toyota";
    car1.model = "Tundra";

    car2.year = 2018;
    car2.make = "Toyota";
    car2.model = "4Runner";

    car3.year = 2023;
    car3.make = "Toyota";
    car3.model = "Tacoma";




    std::cout << car1.year;


    return 0;
}


