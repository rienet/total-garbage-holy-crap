#include "nuclearbomb.h"

void NuclearBomb::action(University uniObject){
	textEvent = "A nuclear bomb hits the university. Miraculously the "
	"university still functions, but you're only left with 10% of your " 
	"students your currency changes to bottle caps.";

	int lessStudents = uniObject.getStudents();
	lessStudents = lessStudents/10;
	newStudents = lessStudents;	
}

int NuclearBomb::getStudents() {
	return newStudents;
}

void NuclearBomb::displayEvent() {
	cout << textEvent << endl;
}