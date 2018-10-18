#include "newclub.h"

void NewClub::action(University uniObject){
	textEvent = "Some new clubs have been popping up and attracting new "
	"students to the uni. You gain double the amount of students you had "
	"before, and is now a club master";

	int moreStudents = uniObject.getStudents();
	moreStudents = moreStudents*2;
	newStudents = moreStudents;	
}

int NewClub::getStudents() {
	return newStudents;
}

void NewClub::displayEvent() {
	cout << textEvent << endl;
}