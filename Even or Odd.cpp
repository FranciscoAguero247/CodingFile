#include <iostream>

void CheckNumber(int number_check);

int main(){
    int number_check;
    char choice;
    std::cout << "Type in a number from 1 to 10\n";
    std::cin >> number_check;
    CheckNumber(number_check);
    do{
    std::cout << "Check another number?\n";
    std::cin >> choice;
    std::cout << "Type in a number from 1 to 10\n";
    std::cin >> number_check;
    CheckNumber(number_check);
    }while(choice == 'y' || choice == 'Y');

    return 0;
}
void CheckNumber(int number_check){
    if(number_check == 2 || number_check == 4 || number_check == 6 || number_check == 8 || number_check == 10){
    std::cout << "Even number" << "\n";
    }else if(number_check == 1 || number_check == 3 || number_check == 5 || number_check == 7 || number_check == 9){
    std::cout << "Odd number" << "\n";
    }

}
