#ifndef COMMUNISM_H
#define COMMUNISM_H

#include "event.h"

class Communism: public Event {
	int newStudents;
	int newMoney;
	int newHate;
	const char textEvent;

	public:
		void action(University uniObject);
		int getStudents();
		int getMoney();
		int getHate();
		void displayEvent();
};

#endif

/* Australia becomes a communist country, and so obviously your university is
affected by this. You share half your money reserves with the common folk,
so you gain some more students and a bit of popularity. */