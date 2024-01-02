#include <iostream>
/*This program will increment the given number by multiples of two*/
int main(){
    int number;
    std::cout << "Hello there. \n";
    std::cout << "********This program will increment the given number by multiples of two.****** \n";
    std::cout << "Enter a number: ";
    std::cin >> number;

    do{
        std::cout << number << "\n";
        number*=2;

    }while(number < 1000 && number != 0);

    return 0;
}
