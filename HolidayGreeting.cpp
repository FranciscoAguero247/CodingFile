#include <iostream>
#include <string>

/*Here the code will ask the user for a date and output a holiday greeting.
Example:
What day is it?
If the user types: 12/25
The console displays Merry Christmas.

Type in a date and checks the list of holidays in the calender
in an if else statement and output a greeting using functions, if else, and while loops if needed.
If its not a holiday then it outputs a normal greeting.
*/

void NewYearsGreeting();
void IndependanceDay();
void ThanksgivingDay();
void ChristmasGreeting();

int main(){
    std::string Date;
    std::cout << "What day is it?\n";
    std::cout << "Type it in Month and Day format.\n";
    std::getline(std::cin, Date);


    if(Date == "January 2"|| Date == "January2"||Date == "january 2"|| Date == "january2"){
        NewYearsGreeting();
    }
    else if(Date == "July 4"|| Date == "July4"||Date == "july 4"|| Date == "july4"){
        IndependanceDay();
    }
    else if(Date == "November 23"|| Date == "November23"||Date == "november 23"|| Date == "november23"){
        ThanksgivingDay();
    }
    else if(Date == "December 25"|| Date == "December25"||Date == "december 25"|| Date == "december25"){
        ChristmasGreeting();
    }
    else{
        std::cout << "h";
    }
    `

    return 0;

}

void ChristmasGreeting(){
    std::cout << "Merry Christmas, everybody!";
}
void NewYearsGreeting(){
    std::cout << "Happy New Year!";
}
void IndependanceDay(){
    std::cout << "O say can you see, by the dawn’s early light,\n";
    std::cout << "What so proudly we hail’d at the twilight’s last gleaming,\n";
    std::cout << "Whose broad stripes and bright stars through the perilous fight\n";
    std::cout << "O’er the ramparts we watch’d were so gallantly streaming?\n";
    std::cout << "And the rocket’s red glare, the bombs bursting in air,\n";
    std::cout << "Gave proof through the night that our flag was still there,\n";
    std::cout << "O say does that star-spangled banner yet wave\n";
    std::cout << "O’er the land of the free and the home of the brave?\n";
    //std::cout << "Independence Day";
}
void ThanksgivingDay(){
    std::cout << "Happy Thanksgiving!";
}
