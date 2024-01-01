#include "rating.h"

rating::rating(class book **bo, class clubMember **mem, int r){
  b = *bo;
  member = *mem;
  rate = r;
}

int rating::getRating(){
  return rate;
}

void rating::setRating(int r){
  rate = r;
}

book* rating::getBook(){
  return b;
}

clubMember* rating::getClubMember(){
  return member;
}

bool rating::moreThan(rating *r)
{
  if (rate > r->rate)
      return true;
  else
      return false;
}

void rating::print(){
  cout << "Book Name: " << b->getTitle() << endl;
  cout << "Club Member: " << member->getFirstName() << " " << member->getLastName() << endl;
  cout << "Rating: "<< rate << endl;
  cout << "-------------------------------------------------------------------" << endl;
}

rating::~rating(){
  delete b;
  delete member;
}
