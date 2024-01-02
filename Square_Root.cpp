#include <iostream>
#include <cmath>

class SquareRootFormula{
private:
    double number_value;
public:
    void SetValue(double number_value){
        number_value = number_value;
    }
    double GetSquareRoot(double number_value){
        return sqrt(number_value);
    }
};


int main(){
    double number_value;
    std::cout << "Type in a positive number to calculate the square root\n";
    std::cin >> number_value;
    do{
        std::cout << "Typed in value cannot be negative. Try again\n";
    }while(number_value >= 0 || number_value != NULL);
    SquareRootFormula SquareRoot;
    std::cout << "The square root is: " << SquareRoot.GetSquareRoot(number_value);
}
