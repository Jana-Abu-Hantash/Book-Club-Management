#ifndef BOOK
#define BOOK

#include <string>

#include <iostream>
using namespace std;

class book
{
  private:
    // Member variables
    int id;
    string title;
    string author;
    int year;

  public:
    // Getters
    int getID();
    string getTitle();
    string getAuthor();
    int getYear();

    // Setters
    void setID(int);
    void setTitle(string);
    void setAuthor(string);
    void setYear(int);

    // Default Constructor
    book();

    // Overload constructors
    book(int , string , string , int);

    // Lessthan Function
    bool LessThan(book *b);

    // Display Function
    void print();

};
#endif
