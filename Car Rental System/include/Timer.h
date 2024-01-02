#include <iomanip>
#include <iostream>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

using namespace std;

int hours = 0;
int minutes = 0;
int seconds = 0;

void displayClock() {

    //system("clear");
    cout << setfill(' ') << setw(55) << "         TIMER         \n";

    cout << setfill(' ') << setw(55) << " --------------------------\n";

    cout << setfill(' ') << setw(29);

    cout << "| " << setfill('0') << setw(2) << hours << " hrs | ";

    cout << setfill('0') << setw(2) << minutes << " min | ";

    cout << setfill('0') << setw(2) << seconds << " sec |" << endl;

    cout << setfill(' ') << setw(55) << " --------------------------\n";
}

char timer(char stopper) {

    // Infinite while loop.
    while(true){
        displayClock();
        sleep(1);
        seconds++;
        if (stopper == 'S' || stopper == 's'){
            break;
            cout << hours << minutes << seconds;
        }
        if (seconds == 60) {
            minutes++;

            if (minutes == 60) {
                hours++;
                minutes = 0;
            }

            seconds = 0;
        }

    }
}
