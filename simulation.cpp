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

//gameWin checks if all the criteria for winning the game are true
void gameWin(Simulation sim, University uni) {
	if (sim.ifMergeYear() == true && uni.getStudents() >= 0 && uni.getMoneyReserve() >= 0 && uni.getHate()) {
		cout << "You successfully survived long enough to finally merge \
		with super TAFE and win a fat check. Congratulations!" << endl;
	} else {
		cout << "Lol you lost" << endl;
	}
}