#ifndef MILITARY_H
#define MILITARY_H

#include "event.h"

class Military: public Event {
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

/*The military approaches you to support your university with more funding.
You get guns that you sell for money, however the military wants some of your
graduates and unfortunately your popularity decreases a bit. */