#ifndef RATING
#define RATING

#include "book.h"
#include "clubMember.h"

using namespace std;

class rating
{
private:
// Member variables
  int rate;
  book* b;
  clubMember* member;

public:

  rating(book **bo, clubMember **mem, int rating);

  int getRating();
  void setRating(int r);
  bool moreThan(rating *r);

  book* getBook();
  clubMember* getClubMember();

  void print();

  ~rating();

};
#endif
