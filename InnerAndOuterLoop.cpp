#include <iostream>
/*This program gives the option to the user to display the given list a desired amount of times*/

int main(){
    int times_numbers;
    int numbers[10] = {15, 30, 45, 60, 75, 90, 105, 120, 135, 150};

    for(int numbers: numbers){
            std::cout << numbers<< " ";
        }
    std::cout << "\nHow many times would you like the list above be repeated?\n";
    std::cin >> times_numbers;
    std::cout << "\n";


    for(int i = 0; i < times_numbers; i++){
        for(int numbers: numbers){
            std::cout<< numbers <<" " ;

        }
        std::cout << "\n";
        }
    return 0;
}

