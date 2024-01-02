#include <iostream>
#include <fstream>
#include <string>
/*GPA Calculator
This program calculates the GPA from the given user's input and
outputs the GPA Score for the student to see*/


int main(){
    int number_of_classes;
    int class_credit;
    char grade_letter;
    char choice;
    const int NUMERICAL_VAUE_FOR_A = 4.0;
    const int NUMERICAL_VAUE_FOR_B = 3.0;
    const int NUMERICAL_VAUE_FOR_C = 2.0;
    const int NUMERICAL_VAUE_FOR_D = 1.0;
    const int NUMERICAL_VAUE_FOR_F = 0.0;

    int total_grade_points = 0;
    int number_of_redoes = 0;
    int GPA_score = 0;
    int total_number_of_redoes = 0;
    int total_credits = 0;

    for(;;){

    std::cout << "Input grade letter: \n";
    std::cin >> grade_letter;
    std::cout << "Type in the credit score:\n";
    std::cin >> class_credit;

    if(grade_letter == 'A' || grade_letter == 'a'){
        number_of_redoes = NUMERICAL_VAUE_FOR_A * class_credit;
    }
    else if(grade_letter == 'B' || grade_letter == 'b'){
        number_of_redoes = NUMERICAL_VAUE_FOR_B * class_credit;
    }
    else if(grade_letter == 'C' || grade_letter == 'c'){
        number_of_redoes = NUMERICAL_VAUE_FOR_C * class_credit;
    }
    else if(grade_letter == 'D' || grade_letter == 'd'){
        number_of_redoes = NUMERICAL_VAUE_FOR_D * class_credit;
    }else if(grade_letter == 'F' || grade_letter == 'f'){
        number_of_redoes = NUMERICAL_VAUE_FOR_F * class_credit;
    }else{
        std::cout << "Invalid grade letter.";
    }

    total_number_of_redoes = total_number_of_redoes + number_of_redoes;
    total_credits = total_credits + class_credit;

    std::cout << "Would you like to enter another grade?\n";
    std::cout << "'y' for yes and 'n' for no\n";
    std::cin >> choice;

    if(choice == 'Y'||choice == 'y'){
        continue;
    }
    else
        break;
    }

    GPA_score = total_number_of_redoes/total_credits;
    std::cout << "The GPA Score is: " << GPA_score << ".\n";

    return 0;
    }
