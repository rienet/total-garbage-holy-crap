#include "nuclearbomb.h"
#include <iostream>
#include <string>
using namespace std;

void NuclearBomb::action(University uniObject){
	textEvent = "A nuclear bomb hits the university. Miraculously the "
	"university still functions, but you're only left with 10% of your " 
	"students your currency changes to bottle caps.";
	cout<<"A nuclear bomb hits the university. Miraculously the "
	"university still functions, but you're only left with 10% of your " 
	"students your currency changes to bottle caps."<<endl;

	int lessStudents = uniObject.getStudents();
	lessStudents = lessStudents/10;
	newStudents = lessStudents;	
	newMoney=uniObject.getMoneyReserve();
	newHate=uniObject.getHate();
}

int NuclearBomb::getStudents() {
	return newStudents;
}
int NuclearBomb::getMoney() {
	return newMoney;
}
int NuclearBomb::getHate() {
	return newHate;
}

void NuclearBomb::displayEvent() {
	cout << textEvent << endl;
}
