#include <iostream>
/*The program converts the temperature from Celsius to Fahrenheit*/
int main(){
    double user_input_in_celsius;
    const double NUM_CONSTANT1 = 1.8;
    const double NUM_CONSTANT2 = 32;

    std::cout << "Input the temperature in Celsius degrees: ";
    std::cin >> user_input_in_celsius;
    double Fahrenheit =  (user_input_in_celsius * NUM_CONSTANT1) + NUM_CONSTANT2;
    std::cout << Fahrenheit << " Fahrenheit degree";

    return 0;
}
