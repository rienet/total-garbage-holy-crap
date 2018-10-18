#ifndef COMMUNISM_H
#define COMMUNISM_H

#include "event.h"

class Communism: public Event {
	int newStudents;
	int newMoney;
	int newHate;

	public:
		void action(University uniObject);
		int getStudents();
		int getMoney();
		int getHate();
};

#endif