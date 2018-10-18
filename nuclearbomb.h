#ifndef NUCLEARBOMB_H
#define NUCLEARBOMB_H

#include "event.h"

class NuclearBomb: public Event {
	int newStudents;
	const char * textEvent;

	public:
		void action(University uniObject);
		int getStudents();
		void displayEvent();
};

#endif

/*"A nuclear bomb hits the university. Miraculously the university
still functions, but you're only left with 10% of your students 
and your currency changes to bottle caps."*/