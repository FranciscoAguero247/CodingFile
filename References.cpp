#include <iostream>
#include <string>

int main(){
    std::string fruit = "Grapes";
    std::string &snack = fruit;

    std::cout << fruit << "\n";
    std::cout << snack << "\n";


}
