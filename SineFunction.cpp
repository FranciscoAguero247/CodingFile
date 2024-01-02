#include <iostream>
#include <cmath>
#define PI 3.14159265

class SineFormula{
private:
    double AngleValue;
public:
    void SetValue(double AngleValue){
        AngleValue = AngleValue;
    }
    double GetSineValue(double AngleValue){
        return sin(AngleValue*PI/180);
    }
};

int main(){
    double AngleValue;
    std::cout << "Type in the value:\n";
    std::cin >> AngleValue;
    SineFormula Sine;
    std::cout << Sine.GetSineValue(AngleValue);
}
