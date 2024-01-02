#include <iostream>
#include <cmath>

class Square_Formula{
private:
    double side;
public:
    void SetSideOfSquare(double side){
        side = side;
    }
    double GetSideOfSquare(){
        return side;
}
    double GetArea(double side){
        return side * side;
    }
    double GetPerimeter(double side){
        return 4 * side;
    }
    double GetDiagonal(double side){
        return side * sqrt(2);

    }
};

int main(){
    double Side_of_Square;
    int Function_Selection;
    std::cout << "Type in the length of the square\n";
    std::cin >> Side_of_Square;
    std::cout << "Select a function to perform from the list below\n";
    std::cout << "1. Area of a square\n";
    std::cout << "2. Perimeter of a square\n";
    std::cout << "3. Diagonal of a square\n";
    std::cin >> Function_Selection;
    Square_Formula Square;
    if(Function_Selection == 1){
        Square.SetSideOfSquare(Side_of_Square);
        std::cout << "The area of the square is: "<< Square.GetArea(Side_of_Square);
    }else if(Function_Selection == 2){
        Square.SetSideOfSquare(Side_of_Square);
        std::cout << "The perimeter of the sqaure is: " << Square.GetPerimeter(Side_of_Square);
    }else if(Function_Selection == 3){
        Square.SetSideOfSquare(Side_of_Square);
        std::cout << "The diaginal of the sqaure is: " << Square.GetDiagonal(Side_of_Square);
    }
}
