#ifndef SIMULATION_H
#define SIMULATION_H
#include "university.h"

class Simulation {
	int year;
	int yearWinCondition;

public:
	Simulation();

	int getYear();
	//University getUniObject();
	void yearlyTick(University uniObject);
	void ifWin();

	//functions ripped from university class
	std::string rippedUniName();
	int rippedMoneyReserve();
	int rippedHate();
};

#endif