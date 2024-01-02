# include <iostream>

class Myclass{
public:
    int x;
    double y;
    void MyClassMethod(){
        std::cout <<"Some output.\n";
    }
};
class MyOtherClass{
public:
    void MyOtherClassMethod(){
        std::cout << "Some other output.\n";
    }
};
class MyChidClass: public Myclass, public MyOtherClass{
};

int main(){
    int user_input_integer;
    double user_input_double;
    std::cout << "Type in a number.\n";
    std::cin >> user_input_integer;
    std::cout << "Type in a number with decimal places.\n";
    std::cin >> user_input_double;


    Myclass obj1;
    obj1.x = user_input_integer;
    std::cout << "The number is: "<< obj1.x << "\n";

    Myclass obj2;
    obj2.y = user_input_double;
    std::cout << "The number is: "<< obj2.y << "\n\n";


    MyChidClass myobj;
    myobj.MyClassMethod();
    myobj.MyOtherClassMethod();

    return 0;
}
