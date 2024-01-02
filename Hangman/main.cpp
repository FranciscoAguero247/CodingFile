#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string myText;
    char letter;

    cout << "I am thinking of thing that holds money in a safe place\nWhat thing am I thinking?\n";
    cout << "Enter a letter and press enter\n";
    cin >> letter;

    ofstream Myfile("Word Spelling.txt");

    Myfile << "account";
    Myfile.close();

    ifstream MyReadFile("Word Spelling.txt");

    while(getline(MyReadFile, myText)){
         myText;
    }
    MyReadFile.close();

    char* word = &myText[0];//converts string to char using the address of the varable mytext with pointers

//create a logic that goes throgh the array and compares the user's input with the values in the array.
//Then use an if stament to determine it adds a line to the hang or a letter to the correctly guessed letters

    char temp[6] = {' ' ,' ' ,' ' ,' ' ,' ' ,' '};

    string man[4][7] = {
    {" ", " ", " ", " ", " ", " ", "|"},//
    {" ", " ", " ", " ", " ", " ", "|"},
    {" ", " ", " ", " ", " ", " ", "|"},
    {" ", " ", " ", " ", " ", " ", "|"}

    };
    cout << "  -----" << endl;
    cout << "  |   |" << endl;

        for(int i = 0; i < 4; i++){
            cout << "\n";
            if(letter != word[0]){
                man[0][2] = "|";
                continue;
            }else if(letter != word[1]){
                man[1][2] = "o";
            }else if(letter != word[2]){
                man[2][1] = "/";
            }else if(letter != word[3]){
                man[2][2] = "|";
            }else if(letter != word[4]){
                man[2][3] = "\\";
            }else if(letter != word[5]){
                man[3][1] = "/";
            }else if(letter != word[6]){
                man[3][3] = "\\";
            }
                for(int j = 0; j < 7; j++){
                    cout << man[i][j];
                }
        }

    cout << "\n      ----" << endl;

    if(letter == word[0] || letter == word[1] || letter == word[2] || letter == word[3] || letter == word[4] || letter == word[5] || letter == word[6]){
        cout << "right\n";
        for(int i = 0; i < 6; i++ ){
            cout << temp[i];
            if(letter == word[0]){
                temp[0]= letter;
            }else if(letter == word[1]){
                temp[1] = letter;
            }else if(letter == word[2]){
                temp[2] = letter;
            }else if(letter == word[3]){
                temp[3] = letter;
            }else if(letter == word[4]){
                temp[4] = letter;
            }else if(letter == word[5]){
                temp[5] = letter;
            }else if(letter == word[6]){
                temp[6] = letter;
            }
    }
    }
    return 0;
}
