#ifndef NEWCLUB_H
#define NEWCLUB_H

#include "event.h"

class NewClub: public Event {
	int newStudents;

	public:
		void action(University uniObject);
		int getStudents();
};

#endif

/* Some new clubs have been popping up and stuff attracting people */