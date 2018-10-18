#include <iostream>
#include "simulation.h"
using namespace std;

Simulation::Simulation() {
	year = 0;
	yearWinCondition = 20;
}


int Simulation::getYear() {
	return year;
}

void Simulation::yearlyTick(University uniObject) {
	year++;
}

bool Simulation::ifMergeYear() {
	if (year == yearWinCondition){
		return	true;
	}
}

