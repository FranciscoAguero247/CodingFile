#include <iostream>
#include <cmath>
#define PI 3.14159265

class ArcCosineFormula{
private:
    double ArcCosine_Value;
public:
    void SetValue(double ArcCosine_Value){
        typed_value = typed_value;
    }
    double GetTypedValue(double ArcCosine_Value){
        return acos(typed_value) * 180.0 / PI;
    }
};

int main(){
    double ArcCosine_Value;
    std::cout << "Type in a value between -1 and 1\n";
    std::cin >> ArcCosine_Value;
    ArcCosineFormula Arccosine;
    std::cout << Arccosine.GetTypedValue(typed_value) << " degrees\n";
}
