#ifndef CLUBMEMBER
#define CLUBMEMBER

#include <string>
#include <iostream>
#include "book.h"
#include "clubMember.h"
using namespace std;

using namespace std;

class clubMember
{
  private:
    // Member variables
    int id;
    string firstName;
    string lastName;

  public:
    // Getters
    int getID();
    string getFirstName();
    string getLastName();

    // Setters
    void setID(int);
    void setFirstName(string);
    void setLastName(string);

    // Default constructor
    clubMember();

    // Overload constructors
    clubMember(int, string, string);

    bool lessThan(clubMember* c);
    void print();

    // void addBookRated(book* b);
    
};

#endif
