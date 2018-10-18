#ifndef EVENT_H
#define EVENT_H

#include "university.h"

class Event {
	int newStudents;

public:
	virtual void action(University uniObject);

	virtual int getStudents();

};

#endif