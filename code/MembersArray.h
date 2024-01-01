#ifndef MEMBERSARRAY
#define MEMBERSARRAY

#include "clubMember.h"

#include <iostream>
using namespace std;

class MembersArray {
  private:
      clubMember* members[10];
      int size, index;

  public:
    MembersArray();

    void add(clubMember* m);
    bool find(int id, clubMember** mem);
    void deleteMem(int id);

    void print();

};
#endif
