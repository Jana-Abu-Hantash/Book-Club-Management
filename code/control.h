#ifndef CONTROL_H
#define CONTROL_H

#include "BookClub.h"
#include "view.h"

//Control class that controls the classes and initializes students and courses in the school, and allows user to do inputs from there to print or whatever.
class control
{
  public:
  	control();
  	void launch();

  	void initBooks(BookClub*);
  	void initMembers(BookClub*);

    void insert_new_book(BookClub*);
    void insert_new_mem(BookClub*);

  private:
  	view View;
};

#endif
