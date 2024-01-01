#include "control.h"


control::control(){

}

void control::launch()
{
  BookClub* effatClub = new BookClub("Effat Uni");
  initMembers(effatClub);
  initBooks(effatClub);
  int choice = 0;
  int ch = 0;

  while (1)
  {
    View.showMenu(choice);
    if (choice == 0)
      break;

    else if (choice == 1)
      effatClub -> printMembers();

    else if (choice == 2)
      effatClub -> printBooks();

    else if (choice == 3){
      int b_ID, m_ID, r;
      View.readBookID(b_ID);
      View.readMemberID(m_ID);
      View.readBookRating(r);
      effatClub -> addRating(m_ID, b_ID, r);
    }

    else if (choice == 4)
      effatClub->printRatings();

    else if (choice == 5)
      effatClub -> bestRatedBook();

    else if (choice == 6)
      effatClub -> most_occured_id();

    else if (choice == 7){
      int ch, id;
      View.choiceSeven(ch);
      if (ch == 0){
        launch();
        break;     }
      else if (ch == 1)
        insert_new_book(effatClub);
      else if (ch == 2){
        View.readBookID(id);
        effatClub -> removeBook(id);}
    }

    else if (choice == 8){
      int ch, Mid;
      View.choiceEight(ch);
      if (ch == 0){
        launch();
        break;     }
      else if (ch == 1)
        insert_new_mem(effatClub);
      else if (ch == 2){
        View.readMemberID(Mid);
        effatClub -> removeMember(Mid);}
    }
  }
}

void control::insert_new_book(BookClub* effatClub)
{
  char ch = 'y';
  while (ch == 'Y' || ch == 'y'){
    int year, id;
    string title, author;

    cout << "\nEnter Book's ID : ";
    View.readInt(id);
    cin.ignore();

    cout << "\nEnter the Book's Title: ";
    View.readStr(title);

    cout << "\nEnter Author's Name: ";
    View.readStr(author);

    cout << "\nEnter the Release Year of the book: ";
    View.readInt(year);

    book* Book = new book(id, title, author, year);
    effatClub -> addBook(Book);

    cout << "\nBook has been added successfully." << endl;
    cout << "------------------------------------------------------------" << endl;
    cout << "Enter (Y/y) to add another Book: ";
    cin >> ch;
  }
    cout << "------------------------------------------------------------------------------------------" << endl;
}

void control::insert_new_mem(BookClub *effatClub)
{
  cout << "Initializing the Club Members...." << endl;
  char ch = 'y';
  while (ch == 'Y' || ch == 'y'){
    int id;
    string Fname, Lname;

    cout << "\nEnter your ID: ";
    View.readInt(id);
    cin.ignore();

    cout << "\nEnter your First Name: ";
    View.readStr(Fname);

    cout << "\nEnter your Last Name: ";
    View.readStr(Lname);

    clubMember* member = new clubMember(id, Fname, Lname);
    effatClub -> addMember(member);

    cout << "\nClub Member has been added successfully." << endl;
    cout << "------------------------------------------------------------" << endl;
    cout << "Enter (Y/y) to add another Member: ";
    cin >> ch;
  }
  cout << "------------------------------------------------------------------------------------------" << endl;

}

void control::initMembers(BookClub *effatClub) {
    cout << "Initializing the Members data...." << endl;
    // Initialize the demo books data
    effatClub->addMember(new clubMember(200, "Mawaddah", "Eyad"));
    effatClub->addMember(new clubMember(201, "Sadeem", "Bin Mahfouz"));
    effatClub->addMember(new clubMember(202, "Jana", "Abu Hantash"));
    effatClub->addMember(new clubMember(203, "Tasneem", "Alaa"));
    effatClub->addMember(new clubMember(204, "Sara", "Salah"));
}

void control::initBooks(BookClub* effatClub)
{    // Initialize the demo books data
    cout << "Initializing the books data...." << endl;
    effatClub->addBook(new book(8356, "Hunger Games", "Suzanne Collins", 2008));
    effatClub->addBook(new book(9492, "Alchemist", "Paulo Coelho", 1988));
    effatClub->addBook(new book(5539, "The Fault in Our Stars", "John Green", 2012));
    effatClub->addBook(new book(3604, "Five Feet Apart", " Mikki Daughtry", 2018));
    effatClub->addBook(new book(7746, "Wonder", "R. J. Palacio", 2012));
    effatClub->addBook(new book(2893, "The bird of happiness", "Tim Herdon", 2011));
    effatClub->addBook(new book(9130, "Maybe You Should Talk to Someone", "Lori Gottlieb", 2019));
    effatClub->addBook(new book(4579, "All the Light We Cannot See", "Anthony Doerr", 2014));
    effatClub->addBook(new book(9457, "Blink: The Power of Thinking Without Thinking", "Malcolm Gladwell", 2005));
    effatClub->addBook(new book(1391, "Surrounded by Psychopaths", "Thomas Erikson", 2019));
    effatClub->addBook(new book(3521, "Women in business", "David evans", 2002));

    cout << "Initializing the Ratings data...." << endl;
    effatClub->addRating(201, 9492, 7);
    effatClub->addRating(200, 9492, 7);
    effatClub->addRating(203, 5539, 3);
    effatClub->addRating(200, 5539, 7);
    effatClub->addRating(201, 1391, 5);
    effatClub->addRating(201, 7746, 5);
    effatClub->addRating(200, 2893, 9);
    effatClub->addRating(202, 5539, 7);
    effatClub->addRating(203, 1391, 9);
    effatClub->addRating(202, 4579, 8);
    effatClub->addRating(203, 4579, 6);
    effatClub->addRating(204, 3604, 7);
    effatClub->addRating(201, 3604, 4);
    effatClub->addRating(203, 9492, 10);
    effatClub->addRating(202, 1391, 1);
    effatClub->addRating(200, 1391, 9);
    effatClub->addRating(204, 4579, 5);
    effatClub->addRating(204, 1391, 6);
    effatClub->addRating(200, 4579, 7);
    effatClub->addRating(203, 8356, 4);
    effatClub->addRating(202, 1391, 2);
    effatClub->addRating(204, 3521, 7);
    effatClub->addRating(202, 9457, 6);
    effatClub->addRating(202, 9130, 3);
    effatClub->addRating(204, 4579, 8);
}
