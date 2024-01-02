#include <iostream>

class Vehicle{
public:
    int MaxVelocity(int speed);
    std::string Make, Model;
    int Year;
};

int Vehicle::MaxVelocity(int TopSpeed){
    return TopSpeed;
}

int main(){
    Vehicle car1;

    car1.Make = "FJA";
    car1.Model = "Super Sonic 700";
    car1.Year = 2016;
    car1.MaxVelocity(300);

    Vehicle car2;

    car2.Make = "FJA";
    car2.Model = "Tunders";
    car2.Year = 2014;
    car1.MaxVelocity(150);

    Vehicle car3;

    car3.Make = "FJA";
    car3.Model = "Farad";
    car3.Year = 2015;
    car1.MaxVelocity(160);

    Vehicle car4;

    car3.Make = "FJA";
    car3.Model = "Bouyant";
    car3.Year = 2016;
    car1.MaxVelocity(175);

    Vehicle car5;

    car3.Make = "FJA";
    car3.Model = "Sonic D";
    car3.Year = 2015;
    car1.MaxVelocity(165);

    Vehicle car6;

    car3.Make = "FJA";
    car3.Model = "Takon";
    car3.Year = 2014;
    car1.MaxVelocity(140);

    Vehicle car7;

    car3.Make = "FJA";
    car3.Model = "D Monster";
    car3.Year = 2015;
    car1.MaxVelocity(145);

    Vehicle car8;

    car8.Make = "FJA";
    car8.Model = "Inger";
    car8.Year = 2016;
    car8.MaxVelocity(300);

    Vehicle SemiTruck1;

    SemiTruck1.Make = "BOHA";
    SemiTruck1.Model = "Truck-One";
    SemiTruck1.Year = 2015;

    Vehicle SemiTruck2;

    SemiTruck2.Make = "BOHA";
    SemiTruck2.Model = "Truck-Two";
    SemiTruck2.Year = 2014;


    std::string brand = "BOHA";

    std::string carmodels[7] = {"Farad", "Bouyant", "Tunders", "Sonic D", "Takon", "Monster D", "Inger"};

    for(int i =0; sizeof(carmodels[i])/sizeof(std::string); i++){
        std::cout << carmodels[i] << "\n";
    }







    std::cout << car1.Make;
    std::cout << car1.MaxVelocity(300);



    return 0;
}
