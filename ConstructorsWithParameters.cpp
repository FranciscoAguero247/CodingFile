#include <iostream>
#include <string>

class ConsClsWthParameters{
public:
    std::string Brand, Model;
    int Year;
    ConsClsWthParameters(std::string Brand, std::string Model, int Year){
        Brand = Brand;
        Model = Model;
        Year = Year;
    }
};

int main(){
    ConsClsWthParameters CarObj1("Ford","Raptor",2017);
    ConsClsWthParameters CarObj2("Ford","Mustang",2019);
    ConsClsWthParameters CarObj3("Toyota","4Runner",2015);

    std::cout <<"Make:\n" << CarObj1.Brand << "\n\nModel:\n" << CarObj1.Model << "\n\nYear:\n" << CarObj1.Year << "\n\n";
    std::cout << "Make:\n" << CarObj2.Brand << "\n\nModel:\n" << CarObj2.Model << "\n\nYear:\n" << CarObj2.Year << "\n\n";
    std::cout <<"Make:\n" <<  CarObj3.Brand << "\n\nModel:\n" << CarObj3.Model << "\n\nYear:\n" << CarObj3.Year << "\n\n";



    return 0;
}
