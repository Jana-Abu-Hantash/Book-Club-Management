#include "MembersArray.h"

MembersArray::MembersArray()
{
  size = 10;
  index = 0;

}

void MembersArray::add(clubMember* m)
{
  if (index < size)
  {
    if (index != 0)
    {
      bool check = false;
      for ( int i =0; i < index; i++)
      {
        if(m -> lessThan(members[i]))
        {
          for ( int j = index-1; j>=i; j--)
          {
            members[j+1] = members[j];
          }
          index++;
          check = true;
          members[i] = m;
          break;
        }
      }
      if(!check)
        members[index++] = m;
    }
    else
    {
      members[index++] = m;
    }
  }
  else
    cout << "Sorry! We can not add more members." << endl;
}

bool MembersArray::find(int id, clubMember** mem)
{
  if (index != 0)
  {
    for (int i = 0; i < index; i++)
    {
      if ( members[i]->getID() == id)
      {
        *mem = members[i];
        return true;
      }
    }
  }
  else
    cout << "No members are available in the list.";
  return false;
}

void MembersArray::deleteMem(int id)
{
  if (index != 0)
  {
    for (int i = 0; i < index; i++)
    {
      if ( members[i]->getID() == id)
      {
        for (int j = index+1; j>=i; j--)
        {
          members[i] = members[i+1];
        }
        index--;
        break;
      }
    }
  }
  else
    cout << "Club Member is not found with this ID."<< id << endl;
}

void MembersArray::print()
{
  if (index != 0)
  {
    cout << "\nDisplaying all Club Members: " << endl;
    for (int i = 0; i < index; i++)
    {
      cout << "Club Member " << i + 1 << ": " << endl;
      members[i]->print();
    }
  }
  else
    cout << "No members are found in the list.";
}
