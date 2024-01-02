#include <iostream>
#include <string>

class Vehicle{
public:
    std::string Make;
    std::string Model;
    int Year;
    Vehicle(std::string Make, std::string Model, int Year){
        this -> Make = Make;
        this -> Model = Model;
        this -> Year = Year;
    }
    int MaxVelocity(int TopSpeed);
};

int Vehicle::MaxVelocity(int TopSpeed){
    return TopSpeed;
}

int main(){

    std::cout << "FJA stands for Fast Joy Autos and BOHA stands for Big Old High Auto.\n\n";

    Vehicle Car1("FJA","Super Sonic 700", 2016);

    std::cout << "The car's top speed for " << Car1.Make << " " << Car1.Model << " " << Car1.Year << " is: \n";
    std::cout << Car1.MaxVelocity(300) << " MPH.\n\n";



    Vehicle Car2("FJA","Thunders", 2014);

    std::cout << "The car's top speed for " << Car2.Make << " " << Car2.Model << " " << Car2.Year << " is: \n";
    std::cout << Car2.MaxVelocity(150) << " MPH.\n\n";

    Vehicle Car3("FJA","Farad", 2015);

    std::cout << "The car's top speed for " << Car3.Make << " " << Car3.Model << " " << Car3.Year << " is: \n";
    std::cout << Car3.MaxVelocity(160) << " MPH.\n\n";

    Vehicle Car4("FJA","Bouyant", 2016);

    std::cout << "The car's top speed for " << Car4.Make << " " << Car4.Model << " " << Car4.Year << " is: \n";
    std::cout << Car4.MaxVelocity(175) << " MPH.\n\n";

    Vehicle Car5("FJA", "Sonic D", 165);

    std::cout << "The car's top speed for " << Car5.Make << " " << Car5.Model << " " << Car5.Year << " is: \n";
    std::cout << Car5.MaxVelocity(175) << " MPH.\n\n";

    Vehicle Car6("FJA","Takon",2014);

    std::cout << "The car's top speed for " << Car6.Make << " " << Car6.Model << " " << Car6.Year << " is: \n";
    std::cout << Car6.MaxVelocity(140) << " MPH.\n\n";

    Vehicle Car7("FJA","D Monster",2015);

    std::cout << "The car's top speed for " << Car7.Make << " " << Car7.Model << " " << Car7.Year << " is: \n";
    std::cout << Car7.MaxVelocity(175) << " MPH.\n\n";

    Vehicle Car8("FJA","Inger",2016);

    std::cout << "The car's top speed for " << Car8.Make << " " << Car8.Model << " " << Car8.Year << " is: \n";
    std::cout << Car8.MaxVelocity(175) << " MPH.\n\n";

    Vehicle Car9("FJA","Super Sonic 650", 2016);

    std::cout << "The car's top speed for " << Car9.Make << " " << Car9.Model << " " << Car9.Year << " is: \n";
    std::cout << Car9.MaxVelocity(200) << " MPH.\n\n";

    Vehicle PoliceCar1("FJA","Super Sonic 650 Police Interceptor",2016);

    std::cout << "The car's top speed for " << PoliceCar1.Make << " " << PoliceCar1.Model << " " << PoliceCar1.Year << " is: \n";
    std::cout << PoliceCar1.MaxVelocity(225) << " MPH.\n\n";


    Vehicle Car10("FJA","Super Sonic 600",2016);

    std::cout << "The car's top speed for " << Car10.Make << " " << Car10.Model << " " << Car10.Year << " is: \n";
    std::cout << Car10.MaxVelocity(200) << " MPH.\n\n";


    Vehicle Car11("FJA","Super Sonic 550",2016);

    std::cout << "The car's top speed for " << Car11.Make << " " << Car11.Model << " " << Car11.Year << " is: \n";
    std::cout << Car11.MaxVelocity(200) << " MPH.\n\n";


    Vehicle Car12("FJA","Super Sonic 500",2016);

    std::cout << "The car's top speed for " << Car12.Make << " " << Car12.Model << " " << Car12.Year << " is: \n";
    std::cout << Car12.MaxVelocity(180) << " MPH.\n\n";


    Vehicle Car13("FJA","Super Sonic 450",2016);

    std::cout << "The car's top speed for " << Car13.Make << " " << Car13.Model << " " << Car13.Year << " is: \n";
    std::cout << Car13.MaxVelocity(130) << " MPH.\n\n";

    Vehicle SemiTruck1("BOHA","Truck-One",2015);

    std::cout << "The car's top speed for " << SemiTruck1.Make << " " << SemiTruck1.Model << " " << SemiTruck1.Year << " is: \n";
    std::cout << SemiTruck1.MaxVelocity(120) << " MPH.\n\n";


    Vehicle SemiTruck2("BOHA","Truck-Two",2014);

    std::cout << "The car's top speed for " << SemiTruck2.Make << " " << SemiTruck2.Model << " " << SemiTruck2.Year << " is: \n";
    std::cout << SemiTruck2.MaxVelocity(110) << " MPH.\n\n";

    return 0;
}

