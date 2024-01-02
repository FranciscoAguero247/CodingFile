#include <iostream>
#include <cmath>

#define PI 3.14159265

class ArcTangentFormula{
private:
    double Arc_Tangent_Value;
public:
    void SetArcTangent(double Arc_Tangent_Value){
        Arc_Tangent_Value = Arc_Tangent_Value;
    }
    double GetArcTangent(double Arc_Tangent_Value){
        return atan(Arc_Tangent_Value) * 180 / PI;
    }
};

int main(){
    double Arc_Tangent_Value;
    std::cout << "Type in the value to calcuate the arc tangent\n";
    std::cin >> Arc_Tangent_Value;
    ArcTangentFormula ArcTangent;
    std::cout << ArcTangent.GetArcTangent(Arc_Tangent_Value) << " degrees\n";
}
