#include <iostream>
#include <fstream>
#include "Student.h"


int main()
{
    std::string name, users_password, read_text;
    int selection;
    RegisteredUser User1;
    std::cout << "Select from the list below\n";
    std::cout << "1. Create an account\n2. Login\n Type in a number\n";
    std::cin >> selection;

    switch(selection){
    case 1:{
        std::cout << "Welcome, let's create an account\n";
        std::ofstream UserFile("User's Login Credentials.txt");
        std::cout << "Create a username\n";
        std::cin >> name;
        UserFile << name;
        User1.SetUserName(name);
        std::cout << "Create a password\n";
        std::cin >> users_password;
        UserFile << users_password;
        User1.SetPassword(users_password);
        UserFile.close();
        break;}
    case 2:{
        std::cout << "Enter your username\n";
        std::cin >> name;
        std::cout << "Enter your password\n";
        std::cin >> users_password;
        if(name == User1.GetUserName() && users_password == User1.GetPassword()){
            std::cout << "Welcome...You're in\n";
            std::ifstream ReadFile("User's Login Credentials.txt");
            while (std::getline(ReadFile, read_text))
            {
                std::cout << read_text;
            }
            ReadFile.close();
        }
        else{
            std::cout << "Incorrect username or password\n";
        }
    break;}
    default:{
        std::cout <<"Incorrect selection";
        break;}
    }
    return 0;
}
