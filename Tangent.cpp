#include <iostream>
#include <cmath>

#define PI 3.14159265

class TangentFormula{
private:
    double Tangent_Value;
public:
    void SetTangentValue(double Tangent_Value){
        Tangent_Value = Tangent_Value;
    }
    double GetTangent(double Tangent_Value){
        return tan(Tangent_Value * PI / 180.0);
    }
};

int main(){
    double Tangent_Value;
    std::cout << "Type in a value to calculate tangent\n";
    std::cin >> Tangent_Value;
    TangentFormula Tangent;
    std::cout << Tangent.GetTangent(Tangent_Value);
}
