#include <iostream>
#include <cmath>
#define PI 3.14159265

class CosineFuction{
private:
    double Input_Angle;
public:
    void setAngle(double Input_Angle){
        Input_Angle = Input_Angle;
    }
    double getCosine(double Input_Angle){
        return cos(Input_Angle* PI / 180.0);
    }
};

int main(){
double Angle;
    std::cout << "Type in the angle to compute the cosine\n";
    std::cin >> Angle;
    CosineFuction Cosine;
    std::cout << Cosine.getCosine(Angle);
}
