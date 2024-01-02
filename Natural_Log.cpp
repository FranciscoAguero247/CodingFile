#include <iostream>
#include <cmath>

class LogFormula{
private:
    double Input_Value;
public:
    void SetBaseValue(double Input_Value){
        Input_Value = Input_Value;
    }
    double GetBaseValue(double Input_Value){
        return log(Input_Value);
    }
};

int main(){
    double base_value;
    std::cout << "Enter the base value to compute the log:\n";
    std::cin >> base_value;
    LogFormula Log;
    std::cout << Log.GetBaseValue(base_value);
}
