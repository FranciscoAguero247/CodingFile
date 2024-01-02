#include <iostream>
#include <cmath>

class EulersNumberCalculation{
private:
    int PowerOfX;
public:
    void SetPower(double PowerOfX){
        PowerOfX = PowerOfX;
    }
    double GetE(double PowerOfX){
        return exp(PowerOfX);
    }
};

int main(){
    double x_value;
    std::cout << "Enter the value for x: \n";
    std::cin >> x_value;
    EulersNumberCalculation E;
    std::cout << "The exponetial is: " << E.GetE(x_value);
    return 0;
}
