#include <iostream>
#include <string>

void mymethod(std::string Name){//Method declared with string name as its parameter.
    std::cout << "Happy birthday to you\n";
    std::cout << "Happy birthday to you\n";
    std::cout << "Happy birthday, " << Name << "\n";
    std::cout << "Happy birthday to you\n";
    std::cout << "\n";
}

int main(){
    std::string Name;
    int old_age;
    while(Name.empty()){//This will keep looping till the condition becomes false.
        std::cout << "Type in your name?\n";
        std::getline(std::cin, Name);
    }
    do{//This will check if the condition is true till it becomes false.
        std::cout << "How old are you, currently?\n";
        std::cin >> old_age;
    }while(old_age == NULL);

    std::cout << "                     0000000        0000000                          \n";
    std::cout << "                        00000000000000000                            \n";
    std::cout << "\\\\\\\\\\\\\\\\\\\\\\\************************************////////////////////\n";
    std::cout <<"\n";
    mymethod(Name);//The method is called with name as its argument.
    mymethod(Name);
    mymethod(Name);
    mymethod(Name);
    std::cout << "///////////////////////************************************\\\\\\\\\\\\\\\\\\\\\n";
    int new_age = old_age + 1;
    std::cout << "You are now " << new_age << " years old.\n";
    //if else statement outputting child, teen, adult, and senior based on calculated age.
    if(new_age <= 12){
        std::cout << "You're a child.";
    }else if(new_age >= 13 && new_age <= 18 ){
        std::cout << "You're a teen.";
    }else if(new_age >= 18 && new_age <= 63){
        std::cout << "You're an adult.";
    }else if(new_age >= 64 && new_age <= 100){
        std::cout << "You're a senior.";
    }else{
        std::cout << "Invalid number.";
    }
    return 0;
}

