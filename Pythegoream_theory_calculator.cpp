#include <iostream>
#include <cmath>

/*The Pythagorean theory solves for the missing angle length*/
int main()
{
    int angle_side_a;
    int angle_side_b;
    int angle_side_c;
    char choice;
    std::cout << "Which side are we solving for:\n";
    std::cout << "A, B, or, C\n";
    std::cin >> choice;
    if (choice == 'a' || 'A'){
        std::cout << "Input the given sides:\n";
        std::cout << "Leg B:\n";
        std::cin >> angle_side_b;
        std::cout << "Hypotenuse:\n";
        std::cin >> angle_side_c;
        int power_value = pow(angle_side_c, 2)-pow(angle_side_b, 2);
        int missing_angle = sqrt(power_value);
        std::cout << "A is equal to: " << missing_angle << "\n";
}else if(choice == 'b'|| 'B'){
        std::cout << "Input the given sides:\n";
        std::cout << "Leg A:\n";
        std::cin >> angle_side_a;
        std::cout << "Hypotenuse:\n";
        std::cin >> angle_side_c;
        int power_value = pow(angle_side_c, 2)-pow(angle_side_a, 2);
        int missing_angle = sqrt(power_value);
        std::cout << "B is equal to: " << missing_angle << "\n";
}else if(choice == 'c'|| 'C'){
        std::cout << "Input the given sides:\n";
        std::cout << "Leg A:\n";
        std::cin >> angle_side_a;
        std::cout << "Leg B:\n";
        std::cin >> angle_side_b;
        int power_value = pow(angle_side_a, 2)+pow(angle_side_b, 2);
        int missing_angle = sqrt(power_value);
        std::cout << "A is equal to: " << missing_angle << "\n";
}else{
    std::cout << "Invalid choice\n";
    }
}
