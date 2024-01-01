#include "BookClub.h"

// Getters
string BookClub::getClubName(){
  return clubName;
}
int BookClub::getNumRatings(){
  return numRatings;
}

// Setters
void BookClub::setClubName(string n){
   clubName = n;
}
void BookClub::setNumRatings(int r){
   numRatings =  r;
}

BookClub::BookClub(string name){
    clubName = name;
    numRatings = 30;
    ratings = new rating*[numRatings];
    index = 0;
}

// string BookClub::returnURL(int bookId){ }

void BookClub::most_occured_id()
{
  int max_count = 0;
  rating* most_common;
  most_common = ratings[0];

  if (index != 0)
  {
    for (int i=0; i<index; i++)
    {
      int count = 1;
      for (int j=i+1; j<index; j++){
        if (ratings[i]-> getBook() -> getID() == ratings[j]-> getBook() -> getID())
             count++;
        if (count > max_count){
            max_count = count;}
      }
      if (count == max_count)
      {
          most_common = ratings[i];
      }
    }
    cout << "\nMost Rated Book by club members id: " << endl;
    most_common->getBook()->print();
  }
  else
  {
    cout << "No rate added." << endl;
  }
    cout << "\n---------------------------------------------------------------";

}

void BookClub::bestRatedBook(){
  rating* best;
  best = ratings[0];
  if (index != 0)
  {
    for (int i = 0; i < index ; i++)
      {
		    if (ratings[i]->getRating() > best->getRating())
          best = ratings[i];
      }
    best->print();
  }
  else
  {
    cout << "No rate added." << endl;
  }
  cout << "\n---------------------------------------------------------------";
}

void BookClub::addBook(book* b){
    books.add(b);
}

void BookClub::addMember(clubMember* m){
  members.add(m);
}

void BookClub::addRating(int m_ID, int b_ID, int r){
  book** bo= new book*();
  if(books.find(b_ID, bo))
  {
    clubMember** mem= new clubMember*();
    if(members.find(m_ID, mem))
    {
      ratings[index++] = new rating(bo, mem, r);
    }
    else
      cout << "No member was found with ID = " << m_ID << endl;
  }
  else
    cout << "Book is not found with ID = "<< b_ID << endl;
}

void BookClub::removeMember(int id){
  members.deleteMem(id);
}

void BookClub::removeBook(int id){
  books.deleteBook(id);
}

void BookClub::printRatings(){
  if (index != 0)
  {
    for(int i=0; i<index; i++)
    {
      ratings[i]->print();
    }
  }
  else
  {
    cout << "No rating added." << endl;
  }
  cout << "---------------------------------------------------------------" << endl;

}

void BookClub::printMembers(){
  members.print();
  cout << "--------------------------------------------------------------------";
}

void BookClub::printBooks(){
  books.print();
  cout << "--------------------------------------------------------------------";
}
