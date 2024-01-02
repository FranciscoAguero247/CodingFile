#include <iostream>
#include <iomanip>//adds precision to the program


double addition(double number1,double number2);
double substraction(double number1,double number2);

int main(){
    int number1, number2;
    do{
    std::cout << "Enter first number: \n";
    std::cin >> number1;
    std::cin.clear();
    fflush(stdin);
    std::cout << "Enter second number: \n";
    std::cin >> number2;
    std::cin.clear();
    fflush(stdin);
    }while(number1 == NULL && number2 == NULL);
    std::cout << "The sum is: "<< addition(number1, number2) << "\n";
    std::cout << "The difference is: " << substraction(number1, number2) << "\n";
    return 0;
}
double addition(double number1,double number2){
    return number1 + number2 ;
}
double substraction(double number1,double number2){
    return number1 - number2;
}
