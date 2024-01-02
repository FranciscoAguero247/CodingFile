#include <iostream>
#include <string>//this will enable the usage of string for this particular program.
using namespace std;
/* The program asks for its name and grade letter score and outputs a compliment.*/

int main(){
    char letter_grade;
    std::string FullName;
    std::cout << "Hello \n";
    std::cout << "there \n";
    std::cout << "What is your full name? \n";
    std::cin >> FullName;
    std::cout << "\n";
    std::cout << "Input a letter grade. \n";
    std::cin >> letter_grade;

    switch(letter_grade){
    case 'A':
        std::cout << "Great job, " << FullName;
        break;
    case 'B':
        std::cout << "Good job, "<< FullName;
        break;
    case 'C':
        std::cout << "Nice job, "<< FullName;
        break;
    case 'D':
        std::cout << "You did not pass, "<< FullName << "Study more and remember more the topics. Remember remain calm.";
        break;
    case 'F':
        std::cout << "You failed, " << FullName << "Study more.";
        break;
    default:
        std::cout << "That's not an appropriate letter grade. Only letter A, B, C, D, or F";
        break;
    }
    return 0;
}
/*class GradeClass {
    char grade_score;

    public score::(char grade_score){
        this.grade_score = grade_score;
    }

};*/
