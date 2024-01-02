#include <iostream>
//Arrays with a for loop and sizeof() function.
int main(){
    double num[] = {1,2,3,4,5,6,7,8.9,530};
/*sizeof() function is used to determine the size of the variable or data type in bytes.
Such as char = to one byte or int = to eight bytes*/
    for(int i = 0; i < sizeof(num)/sizeof(double); i++){
        std::cout << num[i] << "\n";
    }
    std::cout << "\n";
    char grades[] = {'A','B','C','D','F'};

    for(int i = 0; i < sizeof(grades)/sizeof(char); i++){
        std::cout << grades[i] << "\n";
    }
    return 0;
}
