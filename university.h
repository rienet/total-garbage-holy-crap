#ifndef UNIVERSITY_H
#define UNIVERSITY_H

#include <string>

class University {
	std::string uniName;
	int students;
	int moneyReserve;
	int hate;

public:
	University();

	void yearlyMoneyDrain();

	std::string getUniName();
	int getStudents();
	int getMoneyReserve();
	int getHate();

	void setStudents(int newStudents);
	void setMoney(int newMoney);
	void setHate(int newHate);

};

#endif