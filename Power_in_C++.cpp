#include <iostream>
#include <cmath>

int PowAdd(int number_1,int number_2);

int main(){
    int number_1, number_2;
    std::cout << "Type in two numbers to calculate the power.\n";
    std::cout << "Type in the first number:\n";
    std::cin >> number_1;
    std::cout << "Type in the second number:\n";
    std::cin >> number_2;
    PowAdd(number_1, number_2);



    return 0;
}

int PowAdd(int number_1,int number_2){

    int result = pow(number_1 + number_2, 2);
    std::cout << "The power result for the given numbers is: " << result << "\n";
    return 0;
}
