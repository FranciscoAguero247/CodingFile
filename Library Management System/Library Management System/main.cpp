#include <iostream>
#include <Book.h>
#include <vector>
#include <fstream>

using namespace std;

int main()
{
    vector <string> BookInventory = {"1984", "To Kill a Mockinbird", "The Catcher in the Rye", "The Diary of a Young Girl", "The Great Gatsby"};
    string user_input, selected_book;
    vector<string> BooksBorrowed;

    for (int i = 0; i < BookInventory.size(); i++){
        cout << BookInventory[i] << "\n";
    }

    cout << "\nSelect a book from the list above\n";
    cin >> user_input;


    for(int i = 0; i < BookInventory.size(); i++){
        BookInventory[i];
        if(user_input == BookInventory[i]){
            selected_book = BookInventory[i];
            BooksBorrowed.push_back(selected_book);
            BookInventory.pop_back();
            continue;
        }else{
            cout << "Book not available. Check spelling and try again.\n";
            break;
        }
        BookInventory[i];
        }


    BorrowerInfo person1;

    for(int i = 0; i < BooksBorrowed.size(); i++){
        BooksBorrowed[i];
        person1.Loaner("John", 9876543210, BooksBorrowed[i]);
    }

    ofstream LibraryUser("LibraryUser.txt");

    LibraryUser << person1;

    LibraryUser.close();

    return 0;
}
