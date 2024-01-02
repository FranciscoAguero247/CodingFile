#include <iostream>
class MethodInside{
public:
    void InnerMethod(){
        std::cout << "Executed from the class\n";
    }
};

class MethodOutside{
public:
    void OutterMethod();
};

void MethodOutside::OutterMethod(){
    std::cout << "Executed outside the class\n";
}

int main(){
    MethodInside Obj1;
    Obj1.InnerMethod();

    MethodOutside Obj2;
    Obj2.OutterMethod();



    return 0;
}
