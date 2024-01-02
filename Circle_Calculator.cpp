#include <iostream>
#include <cmath>
/*This prgram calculates the area, circumfrance, or diameter based on
the user's choice and given input from the user*/
class Circle_Formulas{
    public:
        double Area_of_Circle(double radius){
            return M_PI * pow(radius, 2);//M_PI is the pi constant found in the cmath library
        }

        double Circumference_of_a_Circle(double radius){
            return 2 * M_PI * radius;
        }

        double Diameter_of_a_Circle(double radius){
            return 2 * radius;
        }
};

int main(){
    int selection_number;
    double radius;
    std::cout << "Select a circle formula to solve.\n";
    std::cout << "1. Area of a circle\n";
    std::cout << "2. Circumfrence of a circle\n";
    std::cout << "3. Diameter of a circle\n";
    std::cin >> selection_number;
    std::cout << "Type in the radius of the circle:\n";
    std::cin >> radius;
    Circle_Formulas Circle;
    switch(selection_number){
        case 1:
            std::cout << "The area of a circle is: " << Circle.Area_of_Circle(radius) << std::endl;
            break;
        case 2:
            std::cout << "The circumference of a circle is: " << Circle.Circumference_of_a_Circle(radius) << std::endl;
            break;
        case 3:
            std::cout << "The diameter of a circle is: " << Circle.Diameter_of_a_Circle(radius) << std::endl;
            break;
        default:
            std::cout << "Incorrect selection\n";
            break;
    }
}
