#include <iostream>
#include <string>
/*The program asks for name and age to see if the user can or cannot enter.
Using the ternary operator instead of the if else statements*/
int main(){
    int num1;
    std::string NameOfPerson;
    std::cout << "What is your full name?";
    std::getline(std::cin, NameOfPerson);/*The getline() method takes in cin as the parameter and NameOfPerson as the second parameter.
                                    Which allows the program to take in the full string with spaces in between inputed by the user.*/
    std::cout << "How old are you?";
    std::cin >> num1;

    num1 >=18 ? std::cout << "Welcome in, " << NameOfPerson : std::cout << "You are not allowed to enter." << NameOfPerson;

    return 0;
}
