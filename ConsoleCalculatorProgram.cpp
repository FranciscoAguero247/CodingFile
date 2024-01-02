#include <iostream>
/*This is a simple calculator*/

int main(){
    char opearator;
    double num1;
    double num2;
    double result;

    std::cout << "**************CALCULATOR**************\n";
    std::cout << "Enter either (+, -, /, or *)";
    std::cin >> opearator;

    std::cout << "Enter number 1: ";
    std::cin >> num1;
    std::cout << "Enter number 2: ";
    std::cin >> num2;
    switch(opearator){
    case '+':
        result = num1 + num2;
        std::cout << "The result for addition is: " << result << "\n";
        break;
    case '-':
        result = num1 - num2;
        std::cout << "The result for subtraction is: " << result << "\n";
        break;
    case '*':
        result = num1 * num2;
        std::cout << "The result for multiplication is: " << result << "\n";
        break;
    case '/':
        result = num1 / num2;
        std::cout << "The result for division is: " << result << "\n";
        break;
    default:
        std::cout << "That was not a valid input opeartor. \n";
        std::cout << "Only type +, *, /, or -";
        break;
    }

    std::cout << "**************END OF PROGRAM**************";

    return 0;
}
