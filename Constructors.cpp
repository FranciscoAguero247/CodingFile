#include <iostream>

class ConstructorClass{
public:
    ConstructorClass(){
        std::cout << "Class Constructor.";
    }

};
int main(){
    ConstructorClass CLassy;
    return 0;
}
