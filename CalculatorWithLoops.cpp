#include <iostream>

/*A calculator with loops to repeat it with a different arithmetic operations with the option to input new numbers*/

int main(){
    double first_number, second_number;

    do{//checks if the user types in a number
        std::cout << "Input the first number: ";
        std::cin >> first_number;
    }while(first_number == NULL);

    do{
    std::cout << "Input the second number: ";
    std::cin >> second_number;
    }while(second_number == NULL);

    char user_choice;
    do{
    char symbol;
    double sum, difference, product, quotient;//Multiple variable deceleration
    std::cout << "Choose from these four symbols to perform an operation:\n";
    std::cout << "+\n-\n*\n/\n";
    std::cin >> symbol;
    switch(symbol){
    case '+':
        sum = first_number + second_number;
        std::cout << "The sum is " << sum<<".\n";
        break;
    case '-':
        difference = first_number - second_number;
        std::cout << "The difference is " << difference<<".\n";
        break;
    case '*':
        product = first_number * second_number;
        std::cout  << "The product is " << product<<".\n";
        break;
    case '/':
        quotient = first_number / second_number;\
        std::cout << "The quotient is "  << quotient<<".\n";
        break;
    default:
        std::cout << "That's not a symbol. Please enter only + , - , *, /.\n";

    }

    std::cout<< "Redo it with same or different numbers?\n";
    std::cout << "Y or N\n";
    std::cin >> user_choice;
/*The user is given a choice to weather or not to rerun the code with the same numbers or different numbers*/
    }while(user_choice == 'Y' || user_choice == 'y');

    if(user_choice == 'N' || user_choice == 'n')
    {
        std::cout << "Input new numbers.\n";
        do{
        std::cout << "Input the first number: ";
        std::cin >> first_number;
        }while(first_number == NULL);

        do{
        std::cout << "Input the second number: ";
        std::cin >> second_number;
        }while(second_number == NULL);

        do{

        char symbol;
        double sum, difference, product, quotient;
        std::cout << "Choose from these four symbols to perform an operation:\n";
        std::cout << "+\n-\n*\n/\n";
        std::cin >> symbol;
        switch(symbol){
        case '+':
            sum = first_number + second_number;
            std::cout << "The sum is " << sum<<".\n";
            break;
        case '-':
            difference = first_number - second_number;
            std::cout << "The difference is " << difference<<".\n";
            break;
        case '*':
            product = first_number * second_number;
            std::cout  << "The product is " << product<<".\n";
            break;
        case '/':
            quotient = first_number / second_number;\
            std::cout << "The quotient is "  << quotient<<".\n";
            break;
        default:
            std::cout << "That's not a symbol. Please enter only + , - , *, /.\n";
        }

        std::cout<< "Redo it?\n";
        std::cout << "Y or N\n";
        std::cin >> user_choice;

        }while(user_choice == 'Y' || user_choice == 'y');
    }

    return 0;
}
