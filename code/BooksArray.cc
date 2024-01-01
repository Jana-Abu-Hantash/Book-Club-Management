#include "BooksArray.h"

BooksArray::BooksArray()
{
  size = 30;
  index = 0;
  books = new book*[size];
}

void BooksArray::add(book* b)
{
  if (index < size)
  {
    if (index != 0)
    {
      bool check = false;
      for ( int i =0; i < index; i++)
      {
        if(b -> LessThan(books[i]))
        {
          for (int j = index-1; j>=i; j--)
          {
            books[j+1] = books[j];
          }
          index++;
          check = true;
          books[i] = b;
          break;
        }
      }
      if(!check)
        books[index++] = b;
    }
    else
    {
      books[index++] = b;
    }
  }
  else
    cout << "Sorry! We can not add more books." << endl;
}

bool BooksArray::find(int num, book** bo)
{
  if (index != 0)
  {
    for (int i = 0; i < index; i++)
    {
      if (books[i]->getID() == num)
      {
        *bo = books[i];
        return true;
      }
    }
  }
  else
    cout << "No Books are available in the list.";
  return false;
}

void BooksArray::deleteBook(int id)
{
  if (index != 0)
  {
    for (int i = 0; i < index; i++)
    {
      if (books[i]->getID() == id)
        {
          for (int j = index+1; j>=i; j--)
          {
            books[i] = books[i+1];
          }
          index--;
          break;
        }
    }
  }
  else
    cout << "No Book is not found with this ID."<< id << endl;
}

void BooksArray::print()
{
  if (index != 0)
  {
    cout << "\nDisplaying all Books: \n" << endl ;
    for (int i = 0; i < index; i++)
    {
      cout << "Book Number " << i + 1 << ": " << endl;
      books[i]->print();
    }
  }
  else
    cout << "No books are in the list.";
}

BooksArray::~BooksArray(){
  for ( int i = 0; i< size; i++) {
     delete books[i];
  }
  delete [] books;
}
