#include <iostream>
#include <cmath>
#define PI 3.14159265

class ArcSineFormula{
private:
    double TypedInValue;
public:
    void SetArcSineValue(double TypedInValue){
        TypedInValue = TypedInValue;
    }
    double GetArcSine(double TypedInValue){
        return asin(TypedInValue)*180.0 / PI;
    }
};


int main(){
double y_value;
std::cout<< "Type the y value to find its angle value\n";
std::cin >> y_value;
ArcSineFormula arcsine;
std::cout << arcsine.GetArcSine(y_value) << " degrees\n";
}
