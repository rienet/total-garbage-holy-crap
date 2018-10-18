#ifndef EVENT_H
#define EVENT_H

#include "university.h"

class Event {
	int newStudents;
	int newMoney;
	int newHate;

public:
	virtual void action(University uniObject);

	virtual int getStudents();
	virtual int getMoney();
	virtual int getHate();

};

#endif