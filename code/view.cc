#include <iostream>

using namespace std;

#include <string>

#include "view.h"

void view::showMenu(int &choice) {
    cout << endl << endl;
    cout << "What would you like to do:" << endl;
    cout << "  (1) Print all members" << endl;
    cout << "  (2) Print all books" << endl;
    cout << "  (3) Rate a book" << endl;
    cout << "  (4) Print All books rated by members" << endl;
    cout << "  (5) Print best book rated by members" << endl;
    cout << "  (6) Print most rated book by members" << endl;
    cout << "  (7) Delete or Add a book" << endl;
    cout << "  (8) Remove or Add a Member" << endl;
    cout << "  (0) Exit" << endl << endl;

    cout << "Enter your selection: ";
    cin >> choice;
    if (choice == 0)
        return;

    while (choice < 1 || choice > 8) {
        cout << "Enter your selection: ";
        cin >> choice;
    }

}

void view::printStr(string str) {
    cout << str;
}

void view::readInt(int &n) {
    cin >> n;
}

void view::readStr(string &str) {
    getline(cin, str);
}

void view::readBookRating(int &rate)
{
  cout << "Enter the Rating (0-10): ";
  cin >> rate;
  while (rate < 1 || rate > 10){
    cout << "Please Enter a Rating between 0 and 10: ";
    cin >> rate;
  }
}

void view::readMemberID(int &memID) {
    cout << "Enter the Member ID" << endl;
    readInt(memID);
}

void view::readBookID(int &bookID) {
    cout << "Enter the Book ID" << endl;
    readInt(bookID);
}

void view::choiceSeven(int &ch){
  cout << endl;
  cout << "What would you like to do:" << endl;
  cout << "  (1) Add a new Book" << endl;
  cout << "  (2) Delete a Book" << endl;
  cout << "  (0) Return to Show Menu\n" << endl;

  cout << "Enter your selection: ";
  cin >> ch;
  if (ch == 0)
      return;

  while (ch < 1 || ch > 2) {
      cout << "\nEnter your selection: ";
      cin >> ch;
    }
}

void view::choiceEight(int &ch){
  cout << endl;
  cout << "What would you like to do:" << endl;
  cout << "  (1) Add a new Club Member" << endl;
  cout << "  (2) Remove a Club Member" << endl;
  cout << "  (0) Return to Show Menu\n" << endl;

  cout << "Enter your selection: ";
  cin >> ch;
  if (ch == 0)
      return;

  while (ch < 1 || ch > 2) {
      cout << "\nEnter your selection: ";
      cin >> ch;
    }
}
