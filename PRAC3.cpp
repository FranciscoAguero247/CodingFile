#include <iostream>
#include <math.h>//adds math capabilty to the program to calculate the square root and power.

double PythagoreanTheoremFormulaForA(double first_input,double second_input);
double PythagoreanTheoremFormulaForB(double first_input,double second_input);
double PythagoreanTheoremFormulaForC(double first_input,double second_input);

int main(){
    double first_input, second_input;
    char solve;
    std::cout << "Which sides of the right are you given\n";
    std::cout << "Given side 1:\n ";
    std::cin >> first_input;
    std::cout << "Given side 2:\n ";
    std::cin >> second_input;
    do{
    std::cout << "Which side are you finding?\n";
    std::cin >> solve;
    }
    while(solve == NULL || solve != 'a' && solve != 'A' && solve != 'b' && solve != 'B' && solve != 'c' && solve != 'C');

    switch(solve){
    case 'a':case 'A':
       std::cout << "a is : " << PythagoreanTheoremFormulaForA(first_input, second_input);
       break;
    case 'b':case 'B':
       std::cout << "b is : " << PythagoreanTheoremFormulaForB(first_input, second_input);
       break;
    case 'c':case 'C':
        std::cout << "c is : " << PythagoreanTheoremFormulaForC(first_input, second_input);
        break;
    default:
       break;
    }
    return 0;
}
double PythagoreanTheoremFormulaForA(double first_input, double second_input){
    double result_for_a;
    result_for_a = sqrt(pow(first_input, 2)+ (pow(second_input, 2)));
    return result_for_a;
}

double PythagoreanTheoremFormulaForB(double first_input, double second_input){
    double result_for_b;
    result_for_b = sqrt(pow(first_input, 2)+ (pow(second_input, 2)));
    return result_for_b;
}

double PythagoreanTheoremFormulaForC(double first_input, double second_input){
    double result_for_c;
    result_for_c = sqrt(pow(first_input, 2)+ (pow(second_input, 2)));
    return result_for_c;
}
