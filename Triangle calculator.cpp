#include <iostream>
#include <cmath>
/*This program computes the sine, cosine and tangent of a right triangle. Based on the given and the selections the user makes*/

class Right_Triangle_Functions{
    public:
        double const PI = 3.14159265;

        double Opposite_Side_Computation(double Given_Angle_Value, double Hypotenuse){
            double Opposite_side = (sin((Given_Angle_Value * PI /180)))*Hypotenuse;
            return Opposite_side;
        }

        double Adjacent_Side_Computation(double Given_Angle_Value, double Hypotenuse){
            double Adjacent_side = (cos((Given_Angle_Value * PI /180)))*Hypotenuse;
            return Adjacent_side;
        }

        double Tangent_Side_Computation(double Given_Angle_Value, double Adjacent){
            double Tangent_side = (tan((Given_Angle_Value * PI /180)))*Adjacent;
            return Tangent_side;
        }

        double Missing_Hypotenuse_With_Sine(double Given_Angle_Value, double Opposite){
            double Hypotenuse = Opposite / (sin((Given_Angle_Value * PI /180)));
            return Hypotenuse;
        }

        double Missing_Hypotenuse_With_Cosine(double Given_Angle_Value, double Opposite){
            double Hypotenuse = Opposite / (cos((Given_Angle_Value * PI /180)));
            return Hypotenuse;
        }

        double Missing_Hypotenuse_With_Tangent(double Given_Angle_Value, double Opposite){
            double Hypotenuse = Opposite / (tan((Given_Angle_Value * PI /180)));
            return Hypotenuse;
        }
};

int main(){

    int Selection_Value;
    double Given_Angle_Value;
    double Opposite, Adjacent, Hypotenuse;
    char Trig_Selection, Side_Selection;

    std::cout << "This program solves the unknown measures of sides\n";
    std::cout << "Enter the angle:\n";
    std::cin >> Given_Angle_Value;
    std::cout << "Which side is the angle refering to?:\n";
    std::cout << "1. Hypotenuse\n";
    std::cout << "2. Opposite\n";
    std::cout << "3. Adjacent\n";
    std::cin >> Selection_Value;
    std::cout << "Which side is been given?\n";
    std::cout << "O or Opposite\n";
    std::cout << "A or Opposite\n";
    std::cout << "H or Opposite\n";
    std::cin >> Side_Selection;
    do{
    if(Side_Selection == 'O' || Side_Selection == 'o'){
        std::cout << "Enter the value for opposite:\n";
        std::cin >> Opposite;
        break;
    }else if(Side_Selection == 'A' || Side_Selection == 'a'){
        std::cout << "Enter the value for adjacent:\n";
        std::cin >> Adjacent;
        break;
    }else if(Side_Selection == 'H' || Side_Selection == 'h'){
        std::cout << "Enter the value for hypotenuse:\n";
        std::cin >> Hypotenuse;
        break;
    }else{
    std::cout << "Incorrect letter. Please try agian.\n"}
    }while(Side_Selection == 'O' || Side_Selection == 'o' || Side_Selection == 'A' || Side_Selection == 'a' || Side_Selection == 'H' || Side_Selection == 'h');
    std::cout << "Which trigonometry fuction?\n";
    std::cout << "S for Sine\n";
    std::cout << "C for cosine\n";
    std::cout << "T for Tangent\n";
    std::cin >> Trig_Selection;
    for(;;){
    Right_Triangle_Functions Triangle_Calculation;
    if(Selection_Value == 1 && Trig_Selection == 'S' || Trig_Selection == 's'){
        std::cout << Triangle_Calculation.Missing_Hypotenuse_With_Sine(Given_Angle_Value, Opposite);
        break;
    }else if(Selection_Value == 1 && Trig_Selection == 'C' || Trig_Selection == 'c'){
        std::cout << Triangle_Calculation.Missing_Hypotenuse_With_Cosine(Given_Angle_Value, Opposite);
        break;
    }else if(Selection_Value == 1 && Trig_Selection == 'T' || Trig_Selection == 't'){
        std::cout << Triangle_Calculation.Missing_Hypotenuse_With_Tangent(Given_Angle_Value, Opposite);
        break;
    }else if(Selection_Value == 2 && Trig_Selection == 'S' || Trig_Selection == 's'){
        std::cout << Triangle_Calculation.Opposite_Side_Computation(Given_Angle_Value, Hypotenuse);
        break;
    }else if(Selection_Value == 3 && Trig_Selection == 'C' || Trig_Selection == 'c'){
        std::cout << Triangle_Calculation.Adjacent_Side_Computation(Given_Angle_Value, Hypotenuse);
        break;
    }else if(Selection_Value == 3 && Trig_Selection == 'T' || Trig_Selection == 't'){
        std::cout << Triangle_Calculation.Tangent_Side_Computation(Given_Angle_Value, Adjacent);
        break;
    }else{
        std::cout << "Incorrect selection and\or combination. Check the given values and input the correct value its appropriate place\n";
        continue;
    }
    }
    }
