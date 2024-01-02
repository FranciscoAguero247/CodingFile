#include <iostream>

class ClassScope{
    public:
    void RunMethod();
};

void ClassScope::RunMethod(){
    std::cout << "class scope.";
}

int main(){
    ClassScope Runner;
    Runner.RunMethod();
    return 0;
}
