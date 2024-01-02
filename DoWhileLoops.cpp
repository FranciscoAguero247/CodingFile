#include <iostream>

int main(){
    int number;

    do{//run these lines of codes once then checks in the while statement if its true to run it again.
        std::cout << "Enter a positive number: ";
        std::cin >> number;
    }while(number < 0);

    std::cout << number;
    return 0;
}
