#include <iostream>

class BaseClass{
public:
    void BaseMethod(){
    std::cout << "Base class through multilevel inheritance\n";
    }
};
class FirstInharitanceClass:BaseClass{
};

class SecondInheritanceClass:FirstInharitanceClass{
};

int main(){

    BaseClass MultiLevelInheritance;
    MultiLevelInheritance.BaseMethod();

    return 0;
}
