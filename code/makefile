TARGETS	=		project

all:		$(TARGETS)

project:		TestDriver.o  book.o clubMember.o rating.o BooksArray.o MembersArray.o BookClub.o control.o view.o
	g++ -o		project		TestDriver.o		book.o clubMember.o rating.o BooksArray.o MembersArray.o BookClub.o control.o view.o

TestDriver.o:		TestDriver.cc		book.h clubMember.h rating.h BooksArray.h MembersArray.h BookClub.h control.h view.h
	g++ -c TestDriver.cc

book.o:		book.cc	book.h
	g++ -c book.cc

clubMember.o:		clubMember.cc		clubMember.h
	g++ -c clubMember.cc

rating.o:		rating.cc		rating.h
	g++ -c rating.cc

BooksArray.o:		BooksArray.cc		BooksArray.h
	g++ -c BooksArray.cc

MembersArray.o:		MembersArray.cc		MembersArray.h
	g++ -c MembersArray.cc

BookClub.o:		BookClub.cc		BookClub.h
	g++ -c BookClub.cc

control.o:		control.cc		control.h
	g++ -c control.cc

view.o:		view.cc		view.h
	g++ -c view.cc

clean:$
	rm -f *.o project
