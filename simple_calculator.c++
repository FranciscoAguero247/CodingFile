#include <iostream>
//using text = std::string;//nickname for endline(endl)
/*Here the program asks for the user for two numbers and it outputs
 the sum, the diffrence, the quotient, and the product of the given numbers*/

int main(){

    double number_1;
    double number_2;
    std::cout << "Type in a number: ";
    std::cin >> number_1;
    std::cout << "Type in a another number: ";
    std::cin >> number_2;


    std::cout << "The sum is: " << number_1 + number_2 << std::endl;
    std::cout << "The product is: " << number_1 * number_2 << std::endl;
    std::cout << "The quotient is: " << number_1 / number_2 << std::endl;
    std::cout <<  "The diffrence is: " <<number_1 - number_2 << std::endl;

    system("pause");
    return 0;
}
