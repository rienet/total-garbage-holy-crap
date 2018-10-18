#include "nuclearbomb.h"

void NuclearBomb::action(University uniObject){

	int lessStudents = uniObject.getStudents();
	lessStudents = lessStudents/10;
	newStudents = lessStudents;	
}

int NuclearBomb::getStudents() {
	return newStudents;
}
/*
void nukeAction(University uniObject) {
	uniObject.setStudents(NuclearBomb.);

	currencySwitch = true;
}
*/
//	Event *events[10] = {UniversityDestroyedEvent(), }

//	events[rand() % 10].action(university);