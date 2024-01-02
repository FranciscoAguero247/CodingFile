#include <iostream>

int main(){
    double num1, num2;
    std::cout << "Type in a number: \n";
    std::cin >> num1;

    std::cout << "Type in another number: \n";
    std::cin >> num2;

    std::cout << "Choose an operation to solve: \n";
    std::cout << "'+', '-', '/', '*':\n";
    char chioce;
    std::cin >> chioce;

    switch(chioce){
    case '+':
        std::cout << num1 + num2;
        break;
    case '-':
        std::cout << num1 - num2;
        break;
    case '/':
        std::cout << num1 / num2;
        break;
    case '*':
        std::cout << num1 * num2;
        break;
    default:
        std::cout << "That's not a valid operator."
    }




}
