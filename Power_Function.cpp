#include <iostream>
#include <cmath>

/*
This program calculates for the power and outputs the result based on the given input
*/

class PowerFormula{
private:
    int Base;
    int Exponent;
public:
    void SetBase(double Base){
        Base = Base;
    }
    void SetExponent(double Exponent){
        Exponent = Exponent;
    }
    double GetPower(double Base, double Exponent){
        return pow(Base, Exponent);
    }
};

int main(){
    int base;
    int exponent;
    std::cout << "Type in the base:\n";
    std::cin >> base;
    std::cout << "Type in the exponent:\n";
    std::cin >> exponent;
    PowerFormula Power;
    std::cout << "The power is: " << Power.GetPower(base, exponent);
    return 0;
}
