#include <iostream>

class Number{
    public:
        int number_i;
        double number_d;
};

int main(){
    int number_input;
    std::cout << "Type in a number: ";
    std::cin >> number_input;
    do{
    if(number_input <= 5){
        std::cout << number_input << " is less than or equal to 5\n";
    }else if(number_input >=5){
        std::cout << number_input << " is greater than or equal to 5\n";
    }
    else{
        std::cout << "Type in a valid number\n";
    }
    }while(number_input == NULL);

    Number NumberDisplayType;
    NumberDisplayType.number_i = 15;
    NumberDisplayType.number_d = 56.55;


    std::cout << NumberDisplayType.number_i << "\n";
    std::cout << NumberDisplayType.number_d << "\n";

    return 0;
}
