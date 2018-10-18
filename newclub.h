#ifndef NEWCLUB_H
#define NEWCLUB_H

#include "event.h"

class NewClub: public Event {
	int newStudents;
	std::string textEvent;

	public:
		void action(University uniObject);
		int getStudents();
		void displayEvent();
};

#endif

/* Some new clubs have been popping up and attracting new students to the uni.
You gain double the amount of students you had before, and is now a club
master */