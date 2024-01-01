#include "clubMember.h"

// Getters
int clubMember::getID(){
  return id;
}

string clubMember::getFirstName(){
  return firstName;
}

string clubMember::getLastName(){
  return lastName;
}

// Setters
void clubMember::setID(int member_id){
  id = member_id;
}

void clubMember::setFirstName(string fname){
  firstName = fname;
}

void clubMember::setLastName(string lname){
  lastName = lname;
}

// Default constructor that will set default values for all member variables
clubMember::clubMember()
{
  id = 0;
  firstName = " ";
  lastName = " ";
}

// Overload constructors that will set the values of each object in this class passed in by the parameter
clubMember::clubMember(int member_id, string fname, string lname)
{
    id = member_id;
    firstName = fname;
    lastName = lname;
}

/* This member function compares the first and last name of this clubMember in this class
 with the other clubMember object passed in as the parameter */
bool clubMember::lessThan(clubMember *c)
{
  if (firstName < c->firstName && lastName < c->lastName)
      return true;
  else
      return false;
}

// void addBookRated(book* b){}

// This function will Display all data saved for every object in this class
void clubMember::print(){
  cout << endl;
  cout << "ID = " << id << endl;
  cout << "First Name = " << firstName << endl;
  cout << "Last Name = "<< lastName<< endl;
  cout << "------------------------------"<< endl;
}
