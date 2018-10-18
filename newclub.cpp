#include "newclub.h"

void NewClub::action(University uniObject){

	int moreStudents = uniObject.getStudents();
	moreStudents = moreStudents*2;
	newStudents = moreStudents;	
}

int NewClub::getStudents() {
	return newStudents;
}