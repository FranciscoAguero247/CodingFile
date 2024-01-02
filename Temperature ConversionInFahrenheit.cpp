#include <iostream>
/*The program converts Fahrenheit to Celsius*/
int main(){
    double user_input_in_fahrenheit;

    std::cout << "Input the temperature in Fahrenheit: ";
    std::cin >> user_input_in_fahrenheit;
    double Celsius = (user_input_in_fahrenheit - 32) * 5/9;
    std::cout << Celsius << " Celsius degree";

    return 0;
}
