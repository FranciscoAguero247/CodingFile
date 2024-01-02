#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    string player_one_input, player_two_input;
    string grid_size[3][3] ={
    {" ", " ", " "},
    {" ", " ", " "},
    {" ", " ", " "}
    };


    for(int i = 0; i < 3; i++){//player 1 inputs of either 'o' or 'x' and adds to array
        cout << "Player 1 type in either O or X\n";
        cin >> player_one_input;
        if(player_one_input == "O" || player_one_input != "o" || player_one_input != "X" || player_one_input != "x"){
            grid_size[2][i] = player_one_input;
        }else{
            cout << "Incorrect letter\n";
            break;
        }
        for (int j = 0; j < 3; j++){//player 2 inputs of either 'o' or 'x' and adds to array
            cout << "Player 2 type in either O or X\n";
            cin >> player_two_input;
             if(player_two_input == "O" || player_two_input != "o" || player_two_input != "X" || player_two_input != "x"){
                grid_size[i][j] = player_one_input;
                grid_size[j][i] = player_two_input;
                grid_size[i][2] = player_one_input;
                grid_size[i][1] = player_two_input;
            }else{
                cout << "Incorrect letter\n";
            break;
            }
            break;
            }
            cout << endl;
        }
        //with "O" or "o" draws
        if(grid_size[0][0] == "O" && grid_size[0][1] == "O" && grid_size[0][2] == "O" || grid_size[0][0] == "o" && grid_size[0][1] == "o" && grid_size[0][2] == "o"){//across row one
            cout << "Draw, 'O' wins!";
        }else if(grid_size[1][0] == "O" && grid_size[1][1] == "O" && grid_size[1][2] == "O" || grid_size[1][0] == "o" && grid_size[1][1] == "o" && grid_size[1][2] == "o"){//across row two
            cout << "Draw, 'O' wins!";
        }else if(grid_size[2][0] == "O" && grid_size[2][1] == "O" && grid_size[2][2] == "O" || grid_size[2][0] == "o" && grid_size[2][1] == "o" && grid_size[2][2] == "o"){//across row three
            cout << "Draw, 'O' wins!";
        }else if(grid_size[0][0] == "O" && grid_size[1][0] == "O" && grid_size[2][0] == "O" || grid_size[0][0] == "o" && grid_size[1][0] == "o" && grid_size[2][0] == "o"){//across column one
            cout << "Draw, 'O' wins!";
        }else if(grid_size[0][1] == "O" && grid_size[1][1] == "O" && grid_size[2][1] == "O" || grid_size[0][1] == "o" && grid_size[1][1] == "o" && grid_size[2][1] == "o"){//across column two
            cout << "Draw, 'O' wins!";
        }else if(grid_size[0][2] == "O" && grid_size[1][2] == "O" && grid_size[2][2] == "O" || grid_size[0][2] == "o" && grid_size[1][2] == "o" && grid_size[2][2] == "o"){//across column three
            cout << "Draw, 'O' wins!";
        }else if(grid_size[0][0] == "O" && grid_size[1][1] == "O" && grid_size[2][2] == "O" || grid_size[0][0] == "o" && grid_size[1][1] == "o" && grid_size[2][2] == "o"){//left diogonal
            cout << "Draw, 'O' wins!";
        }else if(grid_size[0][2] == "O" && grid_size[1][1] == "O" && grid_size[2][0] == "O" || grid_size[0][2] == "o" && grid_size[1][1] == "o" && grid_size[2][0] == "o"){//right diogonal
            cout << "Draw, 'O' wins!";
        }
        //with "X" or "x" draws
         else if(grid_size[0][0] == "X" && grid_size[0][1] == "X" && grid_size[0][2] == "X" || grid_size[0][0] == "x" && grid_size[0][1] == "x" && grid_size[0][2] == "x"){//across row one
            cout << "Draw, 'O' wins!";
        }else if(grid_size[1][0] == "X" && grid_size[1][1] == "X" && grid_size[1][2] == "X" || grid_size[1][0] == "x" && grid_size[1][1] == "x" && grid_size[1][2] == "x"){//across row two
            cout << "Draw, 'X' wins!";
        }else if(grid_size[2][0] == "X" && grid_size[2][1] == "X" && grid_size[2][2] == "X" || grid_size[2][0] == "x" && grid_size[2][1] == "x" && grid_size[2][2] == "x"){//across row three
            cout << "Draw, 'X' wins!";
        }else if(grid_size[0][0] == "X" && grid_size[1][0] == "X" && grid_size[2][0] == "X" || grid_size[0][0] == "x" && grid_size[1][0] == "x" && grid_size[2][0] == "x"){//across column one
            cout << "Draw, 'X' wins!";
        }else if(grid_size[0][1] == "X" && grid_size[1][1] == "X" && grid_size[2][1] == "X" || grid_size[0][1] == "x" && grid_size[1][1] == "x" && grid_size[2][1] == "x"){//across column two
            cout << "Draw, 'X' wins!";
        }else if(grid_size[0][2] == "X" && grid_size[1][2] == "X" && grid_size[2][2] == "X" || grid_size[0][2] == "x" && grid_size[1][2] == "x" && grid_size[2][2] == "x"){//across column three
            cout << "Draw, 'X' wins!";
        }else if(grid_size[0][0] == "X" && grid_size[1][1] == "X" && grid_size[2][2] == "X" || grid_size[0][0] == "x" && grid_size[1][1] == "x" && grid_size[2][2] == "x"){//left diogonal
            cout << "Draw, 'X' wins!";
        }else if(grid_size[0][2] == "X" && grid_size[1][1] == "X" && grid_size[2][0] == "X" || grid_size[0][2] == "x" && grid_size[1][1] == "x" && grid_size[2][0] == "x"){//right diogonal
            cout << "Draw, 'X' wins!";
        }else{
            cout << "Niether 'O' or 'X' wins. The cat wins.";
        }
    cout << "     |      |      \n";
    cout << "     |      |      \n";
    cout << "__" << grid_size[0][0] << "__|___" << grid_size[0][1] << "__|___" << grid_size[0][2] << "___\n";
    cout << "     |      |      \n";
    cout << "     |      |      \n";
    cout << "     |      |      \n";
    cout << "___" << grid_size[1][0] << "_|___" << grid_size[1][1] << "__|___" << grid_size[1][2] << "___\n";
    cout << "     |      |      \n";
    cout << "     |      |      \n";
    cout << "   " << grid_size[2][0] << " |   " << grid_size[2][1] << "  |   " << grid_size[2][2] << "   \n";
    return 0;
}
