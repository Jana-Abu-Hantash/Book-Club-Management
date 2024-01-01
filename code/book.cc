#include "book.h"

// Getters
int book::getID(){
  return id;
}

string book::getTitle(){
  return title;
}

string book::getAuthor(){
  return author;
}

int book::getYear(){
  return year;
}

// Setters
void book::setID(int book_id){
  id = book_id;
}

void book::setTitle(string book_title){
  title = book_title;
}

void book::setAuthor(string book_author){
  author = book_author;
}

void book::setYear(int book_year){
    year = book_year;
}

// Default Constructor that will set default values for all member variables
book::book()
{
    id = 0;
    title = " ";
    author = " ";
    year = 0;
}

// Overload constructors that will set the values of each object in this class
book::book(int book_id, string book_title, string book_author, int book_year)
{
  id = book_id;
  title = book_title;
  author = book_author;
  year = book_year;
}

/* This function compares the book on the title of this book in this class with
the title of the book passed in as the parameter */
bool book::LessThan(book *b)
{
  if (title < b->title)
      return true;
  else
      return false;
}

// This function will Display all data saved for every object in this class
void book::print()
{
  cout << endl;
  cout << "ID = " << id << endl;
  cout << "Book Title = " << title << endl;
  cout << "Author Name = " << author << endl;
  cout << "Release Year = " << year << endl;
  cout << "------------------------------"<< endl;
}
