#include <iostream>
#include <vector>
#include <Customer.h>

using namespace std;

class CarType{
public:
    string YearAndMakeAndModel;
};

int main()
{
    //vector of class

    CarType vehicle;
    vector<string> CarInventory;

    CarInventory.push_back("1. 2015 Ford F-150");
    CarInventory.push_back("2. 2015 GMC Sierra 1500");
    CarInventory.push_back("3. 2015 Toyota Tundra");
    CarInventory.push_back("4. 2015 Toyota Tacoma");
    CarInventory.push_back("5. 2015 Nissan Titan");
    //add objets to vector



    //Dynamic Memory Allocated
    /*
    CarType* car1 = new CarType();
    car1->YearAndMakeAndModel = "1. 2015 Ford F-150";

    CarType* car2 = new CarType();
    car2->YearAndMakeAndModel = "

    CarType* car3 = new CarType();
    car3->YearAndMakeAndModel = "3. 2015 Toyota Tundra";

    CarType* car4 = new CarType();
    car4->YearAndMakeAndModel = "4. 2015 Toyota Tacoma";

    CarType* car5 =  new CarType();
    car5->YearAndMakeAndModel = "5. 2015 Nissan Titan";

    CarType* car6 = new CarType();
    car6->YearAndMakeAndModel = "6. 2015 Chevrolet Silverado";

    CarType* car7 = new CarType();
    car7->YearAndMakeAndModel = "7. 2015 Dodge RAM 1500";

    CarInventory.push_back(car1);
    CarInventory.push_back(car2);
    CarInventory.push_back(car3);
    CarInventory.push_back(car4);
    CarInventory.push_back(car5);
    CarInventory.push_back(car6);
    CarInventory.push_back(car7);*/

    for( auto it: CarInventory){
        cout << it->YearAndMakeAndModel << endl;
    }
    int UserSelection;
    int SelectedVehicle[0];
    cout << "\nSelect one vehicle from the list\n";
    cin >> UserSelection;
    switch (UserSelection){
    case 1:
        cout << "2015 Ford F-150\n";
        cout << CarInventory.at(0) << "\n";//extract an object based on user's selection
        SelectedVehicle[0] = UserSelection;
        break;
    case 2:
        cout << "2015 GMC Sierra 1500\n";
        SelectedVehicle[0] = UserSelection;
        break;
    case 3:
        cout << "2015 Toyota Tundra\n";
        SelectedVehicle[0] = UserSelection;
        break;
    case 4:
        cout << "2015 Toyota Tacoma\n";
        SelectedVehicle[0] = UserSelection;
        break;
    case 5:
        cout << "2015 Nissan Titan\n";
        SelectedVehicle[0] = UserSelection;
        break;
    case 6:
        cout << "2015 Chevrolet Silverado\n";
        SelectedVehicle[0] = UserSelection;
        break;
    case 7:
        cout << "2015 Dodge RAM 1500\n";
        SelectedVehicle[0] = UserSelection;
        break;
    default:
        cout << "The choice you entered is not on the list.";
        break;
    }

    const int hourly_rate = 250;
    int hour;
    int creditcardnumber;
    Customer customer;

    cout << "Type the borrow time in hours.\n";
    cin >> hour;
    cout << customer.ChargeRate(hourly_rate, hour) << " dollars\n";

    cout << "Type in the credit card number\n";
    cin >> creditcardnumber;
    customer.SetCreditCardNumber(creditcardnumber);
    cout << customer.GetCreditCardNumber();

    return 0;
}
