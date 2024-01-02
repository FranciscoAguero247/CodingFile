#include <iostream>
#include <cmath>

/*
This program converts the temperature from celcius to fahrenheit and vice versa.
Encapsulation is added to the program to the bundling of related fields and methods together.
*/
class TemperatureFormulas{
private:
    double Temperature;
public:
    void SetTemperature(double Temperature){
        Temperature = Temperature;
    }
    double GetTemperatureInCelcius(double Temperature){
        return ((Temperature - 32) * 5/9);
    }
    double GetTemperatureInFahrenheit(double Temperature){
        return (Temperature * 9/5) + 32;
    }
};

int main(){

    double Temperature_Value;
    char Temperature_Selection;
    std::cout << "This program converts Fahrenheit to Celcius and vice versa.\n";
    do{
    std::cout << "Type in the tempearature: ";
    std::cin >> Temperature_Value;
    }while(Temperature_Value == NULL);
    std::cout << "Select which to convert the temperature: \n";
    std::cout << "F for Fahrenheit\n";
    std::cout << "C for Celcius\n";
    std::cin >> Temperature_Selection;
    TemperatureFormulas Formula;
    if(Temperature_Selection == 'F' || Temperature_Selection == 'f'){
        std::cout << Formula.GetTemperatureInFahrenheit(Temperature_Value);
    }else if(Temperature_Selection == 'C' || Temperature_Selection == 'c'){
        std::cout << Formula.GetTemperatureInCelcius(Temperature_Value);
    }else{
        std::cout << "Wrong letter. Please try again.\n";
    }
}
