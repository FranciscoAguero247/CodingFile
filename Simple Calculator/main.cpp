#include <iostream>

using namespace std;

class Calculator{

int first_number, second_number;
public:
int Addition(int first_number, int second_number){
    return first_number + second_number;
}

int Subtraction(int first_number, int second_number){
    return first_number - second_number;
}

int Division(int first_number, int second_number){
    return first_number / second_number;
}

int Multiplication(int first_number, int second_number){
    return first_number * second_number;
}
};

int main()
{
    int first_typed_number, second_typed_number;
    char operation;
    cout << "Type in a whole number and press enter\n" << endl;
    cin >> first_typed_number;
    cout << "Type in another whole number and press enter\n" << endl;
    cin >> second_typed_number;
    cout << "Select an operation from he list below\n";
    cout << "+\n";
    cout << "-\n";
    cout << "*\n";
    cout << "/\n";
    cin >> operation;
    Calculator BasicCalculator;
    if(operation == '+'){
        BasicCalculator.Addition(first_typed_number, second_typed_number);
        cout << "The sum is: " << BasicCalculator.Addition(first_typed_number, second_typed_number);
    }
    else if(operation == '-'){
        BasicCalculator.Subtraction(first_typed_number, second_typed_number);
        cout << "The difference is: " << BasicCalculator.Subtraction(first_typed_number, second_typed_number);
    }
    else if(operation == '*'){
        BasicCalculator.Multiplication(first_typed_number, second_typed_number);
        cout << "The product is: " << BasicCalculator.Multiplication(first_typed_number, second_typed_number);
    }
    else if(operation == '/'){
        BasicCalculator.Division(first_typed_number, second_typed_number);
        cout << "The quotient is: " << BasicCalculator.Division(first_typed_number, second_typed_number);
    }else{
        cout << "Incorrect selection\n";
    }
    return 0;
}
