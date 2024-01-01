#ifndef BOOKCLUB
#define BOOKCLUB

#include "MembersArray.h"
#include "BooksArray.h"
#include "rating.h"

#include <string>
#include <iostream>
using namespace std;

class BookClub
{
  private:
    // Member variables
    string clubName;
    int numRatings;
    int index;
    rating **ratings;
    BooksArray books;
    MembersArray members;


  public:
    // Getters
    string getClubName();
    int getNumRatings();

    // Setters
    void setClubName(string);
    void setNumRatings(int);

    // Constructor
    BookClub(string);

    void most_occured_id();
    void bestRatedBook();
    //string returnURL(int bookId);

    void addBook(book *b);
    void addMember(clubMember *m);
    void addRating(int, int, int);

    void removeMember(int id);
    void removeBook(int id);

    void print();
    void printRatings();
    //void printRatingsOfBooks(int);
    void printMembers();
    void printBooks();

};
#endif
