#ifndef VIEW_H
#define VIEW_H

#include <iostream>
#include <string>
using namespace std;


class view
{
  public:
    void showMenu(int&);
    void printStr(string);
    void readInt(int&);
    void readStr(string&);

    void readBookRating(int&);
    void readMemberID(int& id);
    void readBookID(int& id);

    void choiceSeven(int &ch);
    void choiceEight(int &ch);

};

#endif
