#define NEWCLUB_H

#include "event.h"

class NewClub: public Event {
	int newStudents;
	int newMoney;
	int newHate;
	std::string textEvent;

	public:
		void action(University uniObject);
		int getStudents();
		void displayEvent();
		int getMoney();
		int getHate();
};

#endif

/* Some new clubs have been popping up and attracting new students to the uni.
You gain double the amount of students you had before, and is now a club
master */
