#include <iostream>
#include <cmath>//Here its including the cmath library to calculate the hypotenuse of a right trianlgle


int main(){
   double a;
   double b;
   double c;

   std::cout << "Solve for hypotenuse for a right triangle \n";

   std::cout << "Enter side A: \n";
   std::cin >> a;
   std::cout << "Enter side B: \n";
   std::cin >> b;

   c = sqrt(pow(a,2)+pow(b, 2));
   std::cout << "Side C is: " << c;


    return 0;
}
