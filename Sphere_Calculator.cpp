#include <iostream>
#include <cmath>
/*This program calculates the volume, surface, and diamter of a sphere.*/

class Sphere_Formulas{
public:
    double Diameter_of_a_Sphere(double radius){
        return 2 * radius;
    }
    double Surface_Area_of_a_Sphere(double radius){
        return 4 * M_PI * pow(radius, 2);
    }
    double Volume_of_a_Sphere(double radius){
        return 1.33 * M_PI * pow(radius, 3);
    }
};

int main(){
    int choice;
    double radius;
    std::cout << "Select a sphere formula below to solve: \n";
    std::cout << "1. Diameter of a sphere\n";
    std::cout << "2. Surface area of a sphere\n";
    std::cout << "3. Volume of a sphere\n";
    std::cin >> choice;
    if(choice != 1 || choice != 2 || choice != 3 || choice == NULL){
        std::cout << "Incorrect selection.\n";
        return 0;
    }
    std::cout << "Type in the radius.\n";
    std::cin >> radius;
    Sphere_Formulas Sphere;
    switch(choice){
    case 1:
        std::cout << "The diameter of the sphere is: " << Sphere.Diameter_of_a_Sphere(radius) << std::endl;
        break;
    case 2:
        std::cout << "The surface area of the sphere is: " << Sphere.Surface_Area_of_a_Sphere(radius)  << std::endl;
        break;
    case 3:
        std::cout << "The volume of the sphere is: " << Sphere.Volume_of_a_Sphere(radius) << std::endl;
        break;
    }
}
