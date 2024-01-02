#include <iostream>
#include <string>
#include <iomanip>//adds precision to the program

//simple ATM machine

double DepositMoney();
double WithdrawMoney(double current_balance);
void AccountInformation(std::string full_name, double current_balance);

int main(){
    struct{
        std::string full_name;
        int pin_number;
        double current_balance=0;
}user_information;

    int user_input=0;
    double money_transaction;
    char choice;

    //std::cout << "Hello World!\n";
    std::cout << "Welcome to the U.I.O. Bank\n";

    while(user_information.full_name.empty()){
        std::cout << "Type in your full name.\n";
        std::getline(std::cin, user_information.full_name);
    }
    std::cin.clear();
    fflush(stdin);


    do{
        std::cout << "Type in your pin\n";
        std::cin >> user_information.pin_number;
            if(user_information.pin_number == 1111){
                break;
            }
    }while(user_information.pin_number != NULL);
do{
    std::cout << "What would you like to do?\n";
    std::cout << "1. View account information\n2. Make a deposit\n3. Withdraw\n4. Exit\n";
    std::cin >> user_input;

    std::cin.clear();//this clears it after enter is pressed.
    fflush(stdin);

switch(user_input){
case 1:
    AccountInformation(user_information.full_name, user_information.current_balance);//output a function with name and information
    break;
case 2:
    user_information.current_balance += DepositMoney();
    AccountInformation(user_information.full_name, user_information.current_balance);
    break;
case 3:
    user_information.current_balance -= WithdrawMoney(user_information.current_balance);
    AccountInformation(user_information.full_name, user_information.current_balance);
    break;
case 4:
    std::cout << "Thank you for your visit. Have a nice day.\n";
}
}while(user_input != 4);
    return 0;
}

double DepositMoney(){
    double amount = 0;

    std::cout << "Type in the amount to deposit: \n";
    std::cin >> amount;
    if(amount > 0){
        return amount;
    }else{
        std::cout << "That's not a valid number\n";
    }
}
double WithdrawMoney(double current_balance){

    double amount = 0;

    std::cout << "Enter amount to withdraw: \n";
    std::cin >> amount;

    if(amount > current_balance){
        std::cout << "Insufficient funds \n";
        return 0;
    }else if(amount < 0){
        std::cout << "That's not a valid number.\n";
        return 0;
    }else{
        return amount;
    }
}
void AccountInformation(std::string full_name, double current_balance){
    long account_number = 9876543210;
    std::cout << account_number << "\n";
    std::cout << full_name  << " has " << "$ " << std::setprecision(2) << std::fixed << current_balance << "\n";//enables the current_balance variable to be set to two decimal places
}
