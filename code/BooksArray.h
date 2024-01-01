#ifndef BOOKSARRAY
#define BOOKSARRAY

#include "book.h"

#include <iostream>
using namespace std;

class BooksArray {
  private:
      book** books;
      int size, index;

  public:
    BooksArray();

    void add(book* b);
    bool find(int num, book** bo);
    void deleteBook(int id);

    void print();

    ~BooksArray();
};
#endif
