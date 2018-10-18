#ifndef UNIVERSITY_H
#define UNIVERSITY_H

#include <string>

//university simulation
class University {
	int students;
	int moneyReserve;
	int hate;
	int fees;

public:
	University();

	void yearlyMoneyDrain();

	int getStudents();
	int getMoneyReserve();
	int getHate();

	void setStudents(int newStudents);
	void setMoney(int newMoney);
	void setHate(int newHate);

	//raises student fees and so on
	void raiseFees();
	void collectFees();

};

#endif