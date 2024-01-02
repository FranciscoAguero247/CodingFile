#include <iostream>

class TypesOfAccessSpecifiers{
public:
    int pub;
private:
    int pri;
};

int main(){

    TypesOfAccessSpecifiers AccesserType;
    AccesserType.pub = 5;
    //AccesserType.pri = 5;//int pri is inaccessible because its private.

    return 0;
}
