#ifndef EVENT_H
#define EVENT_H

#include "university.h"

//pure virtual class, used to help define special events that are called each year
class Event {
	int newStudents;
	int newMoney;
	int newHate;
	const char * textEvent;

public:
	virtual void action(University uniObject);
	virtual void displayEvent();

	virtual int getStudents();
	virtual int getMoney();
	virtual int getHate();

};

#endif