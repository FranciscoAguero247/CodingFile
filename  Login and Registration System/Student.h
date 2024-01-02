#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED

#include <iostream>

class RegisteredUser{
    private:
    std::string user_name, password;
    public:
    void SetUserName(std::string un){
        std::string user_name = un;
    }

    std::string GetUserName(){
        return user_name;
    }

    void SetPassword(std::string psswrd){
        std::string password = psswrd;
    }

    std::string GetPassword(){
        return password;
    }

};

#endif // STUDENT_H_INCLUDED
