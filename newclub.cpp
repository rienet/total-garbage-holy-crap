#include "newclub.h"
#include <iostream>
#include <string>
using namespace std;

void NewClub::action(University uniObject){
	textEvent = "Some new clubs have been popping up and attracting new "
	"students to the uni. You gain double the amount of students you had "
	"before, and is now a club master";
	cout<<"Some new clubs have been popping up and attracting new "
	"students to the uni. You gain double the amount of students you had "
	"before, and is now a club master"<<endl;

	int moreStudents = uniObject.getStudents();
	moreStudents = moreStudents*2;
	newStudents = moreStudents;	
	newMoney=uniObject.getMoneyReserve();
	newHate=uniObject.getHate();
}

int NewClub::getStudents() {
	return newStudents;
}

int NewClub::getMoney() {
	return newMoney;
}
int NewClub::getHate() {
	return newHate;
}

void NewClub::displayEvent() {
	cout << textEvent << endl;
}
