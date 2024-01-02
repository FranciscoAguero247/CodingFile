#include <iostream>
using namespace std;
/*The program asks for name, asks for two number, and asks whether to find the product of the numbers or not*/
int main(){
    string name;
    double first_number, second_number;
    char choice;

    cout << "What is your name? \n";//the "\n" creates a new line in the console
    cin >> name;
    cout << "Hello, " << name << " \n";
    cout << name << ", What numbers would you like to add? \n";
    cout << "Type in the first number: ";
    cin >> first_number;
    cout << "Type in the second number: ";
    cin >> second_number;
    double sum_of_numbers = first_number + second_number;
    cout << "The sum is: " << sum_of_numbers<<" \n";
    cout << "Would you like to find the product? \n";
    cout << "Y or N \n";
    cin >> choice;

    if( choice == 'Y' || choice =='y'){
        double product_of_numbers = first_number * second_number;
        cout << "The product is: "<< product_of_numbers;
    }
    else if(choice == 'N'|| choice == 'n'){
        cout << "End of program.";
    }

    return 0;
}
