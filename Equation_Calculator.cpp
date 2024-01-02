# include <iostream>
# include <cmath>
/*This program calculates the roots of a given equation using the quadratic formula*/

double Positive_Quadratic_Equation(double a, double b, double c){
    return (-b + (sqrt(pow(b, 2)- (4 * a *c))))/(2 * a);
}
double Negative_Quadratic_Equation(double a, double b, double c){
    return (-b - (sqrt(pow(b, 2)- (4 * a *c))))/(2 * a);
}

int main(){
    double a, b, c;
    do{
    std::cout << "Type in the values from the given equation to find the roots: \n";
    std::cout << "a is: \n";
    std::cin >> a;
    std::cout << "b is: \n";
    std::cin >> b;
    std::cout << "c is: \n";
    std::cin >> c;
    std::cout << "First root: " << Positive_Quadratic_Equation(a, b, c) << std::endl;
    std::cout << "Second root: " << Negative_Quadratic_Equation(a, b, c) << std::endl;
    }while(a == NULL || b == NULL || c == NULL);
}
