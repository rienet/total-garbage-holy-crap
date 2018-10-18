#ifndef SIMULATION_H
#define SIMULATION_H
#include "university.h"

/*Simulation class basically keeps 'track' of the simulation by 
providing the year and 'ticks' that helps with loops and inputs*/
class Simulation {
	int year;
	int yearWinCondition;

public:
	Simulation();

	int getYear();
	void yearlyTick(University uniObject);
	bool ifMergeYear();

};

#endif