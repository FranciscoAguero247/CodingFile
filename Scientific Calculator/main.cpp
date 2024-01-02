#include <iostream>
#include <cmath>

#define PI 3.14159265

class BasicOperations{
public:
    double addition(double first_number, double second_number){
        return first_number + second_number;
}
    double subtraction(double first_number, double second_number){
        return first_number - second_number;
}
    double multiplication(double first_number, double second_number){
        return first_number * second_number;
}
    double division(double first_number, double second_number){
        return first_number / second_number;
}
};

class TrigonometryFunctions{
public:
    class SineFormula{
    private:
        double AngleValue;
    public:
        double GetSineValue(double AngleValue){
            return sin(AngleValue*PI/180);
        }
    };

    class CosineFuction{
    private:
        double Input_Angle;
    public:
        double GetCosine(double Input_Angle){
            return cos(Input_Angle* PI / 180.0);
        }
    };

    class ArcSineFormula{
    private:
        double TypedInValue;
    public:
        double GetArcSine(double TypedInValue){
            return asin(TypedInValue)*180.0 / PI;
        }
    };

    class ArcCosineFormula{
    private:
        double ArcCosineValue;
    public:
        double GetArcCosine(double ArcCosine_Value){
            return acos(ArcCosine_Value) * 180.0 / PI;
        }
    };

    class TangentFormula{
    private:
        double Tangent_Value;
    public:
        double GetTangent(double Tangent_Value){
            return tan(Tangent_Value * PI / 180.0);
        }
    };

    class ArcTangentFormula{
    private:
        double Arc_Tangent_Value;
    public:
        double GetArcTangent(double Arc_Tangent_Value){
            return atan(Arc_Tangent_Value) * 180 / PI;
        }
    };
};

class SpecialFunctions{
public:
    class PowerFormula{
    private:
        int Base;
        int Exponent;
    public:
        double GetPower(double Base, double Exponent){
            return pow(Base, Exponent);
        }
    };

    class SquareRootFormula{
    private:
        double number_value;
    public:
        double GetSquareRoot(double number_value){
            return sqrt(number_value);
        }
    };

    class EulersNumberCalculation{
    private:
        int PowerOfX;
    public:
        double GetE(double PowerOfX){
            return exp(PowerOfX);
        }
    };

    class LogFormula{
    private:
        double Input_Value;
    public:
        double GetBaseValue(double Input_Value){
            return log(Input_Value);
        }
    };
};


int main()
{
    struct User_defined_numbers{
     double first_number, second_number,
        base, exponent, x_value_for_e,
        base_value_for_log, angle_value,
        arccosine_value, arcsine_value,
        arctangent_value, tangent_value;
     int selection, positive_number;
    };
    std::cout << "\t--------------------------------------------------------\n";
    std::cout << "\t------------------Scientific Calculator-----------------\n";
    std::cout << "\t--------------------------------------------------------\n";
    std::cout << "\nSelect a math operation from the list below:\n";
    std::cout << "\n1. Addition\n";
    std::cout << "2. Subtraction\n";
    std::cout << "3. Multiplication\n";
    std::cout << "4. Division\n";
    std::cout << "5. Power\n";
    std::cout << "6. Square Root\n";
    std::cout << "7. Exponential\n";
    std::cout << "8. Natural Log\n";
    std::cout << "9. Sine\n";
    std::cout << "10. Arcsine\n";
    std::cout << "11. Cosine\n";
    std::cout << "12. Arccosine\n";
    std::cout << "13. Tangent\n";
    std::cout << "14. Arctangent\n";
    User_defined_numbers Numberinput;
    std::cin >> Numberinput.selection;
    BasicOperations Basicoperation;
    SpecialFunctions::PowerFormula Power;
    SpecialFunctions::SquareRootFormula Squareroot;
    SpecialFunctions::EulersNumberCalculation Eulers;
    SpecialFunctions::LogFormula Naturallog;
    TrigonometryFunctions::SineFormula Sine;
    TrigonometryFunctions::ArcSineFormula Arcsine;
    TrigonometryFunctions::CosineFuction Cosine;
    TrigonometryFunctions::ArcCosineFormula Arccosine;
    TrigonometryFunctions::TangentFormula Tangent;
    TrigonometryFunctions::ArcTangentFormula Arctangent;

    if(Numberinput.selection == 1 || Numberinput.selection == 2 || Numberinput.selection == 3 || Numberinput.selection == 4){
        std::cout << "Type in the first number:\n";
        std::cin >> Numberinput.first_number;
        std::cout << "Type in the second number:\n";
        std::cin >> Numberinput.second_number;
    }
    if(Numberinput.selection == 5){
        std::cout << "Type in the base:\n";
        std::cin >> Numberinput.base;
        std::cout << "Type in the exponent:\n";
        std::cin >> Numberinput.exponent;
    }
    if(Numberinput.selection == 6){
        do{
        std::cout << "Type in a positive number:\n";
        std::cin >> Numberinput.positive_number;
        }while(Numberinput.positive_number <=0);
    }
    if(Numberinput.selection == 7){
        std::cout << "Type in the value for x:\n";
        std::cin >> Numberinput.x_value_for_e;
    }
    if(Numberinput.selection == 8){
        std::cout << "Enter the base:\n";
        std::cin >> Numberinput.base_value_for_log;
    }
    if(Numberinput.selection == 9){
        std::cout << "Enter the angle:\n";
        std::cin >> Numberinput.angle_value;
    }
    if(Numberinput.selection == 10){
        std::cout << "Type the value between -1 and 1 to find its angle:\n";
        std::cin >> Numberinput.arcsine_value;
    }
    if(Numberinput.selection == 11){
        std::cout << "Enter the angle:\n";
        std::cin >> Numberinput.angle_value;
    }
    if(Numberinput.selection == 12){
        std::cout << "Type the value between -1 and 1 to find its angle:\n";
        std::cin >> Numberinput.arccosine_value;
    }
    if(Numberinput.selection == 13){
        std::cout << "Enter the angle:\n";
        std::cin >> Numberinput.tangent_value;
    }
    if(Numberinput.selection == 14){
        std::cout << "Type in a value to calculate the angle:\n";
        std::cin >> Numberinput.arctangent_value;
    }

    switch(Numberinput.selection){
    case 1:
        std::cout << "The sum is: " << Basicoperation.addition(Numberinput.first_number, Numberinput.second_number);
        break;
    case 2:
        std::cout << "The diffrence is: " << Basicoperation.subtraction(Numberinput.first_number, Numberinput.second_number);
        break;
    case 3:
        std::cout << "The product is: " << Basicoperation.multiplication(Numberinput.first_number, Numberinput.second_number);
        break;
    case 4:
        std::cout << "The quotient is: " << Basicoperation.division(Numberinput.first_number, Numberinput.second_number);
        break;
    case 5:
        std::cout << "The power is: " << Power.GetPower(Numberinput.base, Numberinput.exponent);
        break;
    case 6:
        std::cout << "The square root is: " << Squareroot.GetSquareRoot(Numberinput.positive_number);
        break;
    case 7:
        std::cout << "The exponential is: " << Eulers.GetE(Numberinput.x_value_for_e);
        break;
    case 8:
        std::cout << "The natural log is: " << Naturallog.GetBaseValue(Numberinput.base_value_for_log);
        break;
    case 9:
        std::cout << "The sine is: "<< Sine.GetSineValue(Numberinput.angle_value);
        break;
    case 10:
        std::cout << "The arc sine is: " << Arcsine.GetArcSine(Numberinput.arcsine_value) << " degrees\n";
        break;
    case 11:
        std::cout << "The cosine is: " <<  Cosine.GetCosine(Numberinput.angle_value);
        break;
    case 12:
        std::cout << "The arc cosine is: " << Arccosine.GetArcCosine(Numberinput.arccosine_value) << " degrees\n";
        break;
    case 13:
        std::cout << "The tangent is: " << Tangent.GetTangent(Numberinput.tangent_value);
        break;
    case 14:
        std::cout << "The arc tangent is: " << Arctangent.GetArcTangent(Numberinput.arctangent_value) << " degrees\n";
        break;
    default:
        std::cout << "Wrong choice number";
        break;
}
    return 0;
}
