#include <iostream>

class BasicOperations{
public:
   double addition(double first_number, double second_number){

return first_number + second_number;

}
double subtraction(double first_number, double second_number){

return first_number - second_number;

}

double multiplication(double first_number, double second_number){

return first_number * second_number;

}

double division(double first_number, double second_number){

return first_number / second_number;

}
};


int main(){

 double num_1, num_2;
char choice;

std::cout << "Type in a number:\n";
std::cin >> num_1;
std::cout << "Type in another number:\n";
std::cin >> num_2;

std::cout << "Select an option below to calculate: \n";
std::cout << "To add select: '+'\n";
std::cout << "To subtract select: '-'\n";
std::cout << "To multiply select: '*'\n";
std::cout << "To divide select: '/'\n";
std::cin >> choice;

BasicOperations Calculator;
    if(choice == '+' || choice == '-' || choice == '*' || choice == '/'){
        switch (choice){
        case '+':
            std::cout << "The sum is: " <<Calculator.addition(num_1, num_2) << std::endl;//find a way to connect the class function with another function
            break;
        case '-':
            std::cout << "The difference is: " <<Calculator.subtraction(num_1, num_2) << std::endl;
            break;
        case '*':
            std::cout << "The product is: " <<Calculator.multiplication(num_1, num_2) << std::endl;
            break;
        case '/':
            std::cout << "The quotient is: " <<Calculator.division(num_1, num_2) << std::endl;
            break;
        }
  }
  else{
        std::cout << "Invalid choice\n";
        std::cout << "Please try again\n";
    }
    while(choice == NULL);
}

