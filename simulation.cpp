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

/*
void Simulation::setUni(University blankUni) {
	uniPointer = &blankUni;
}


void Simulation::getUniObject() {
	return uniObject;
}
*/
void Simulation::yearlyTick(University uniObject) {
	year++;
	uniObject.yearlyMoneyDrain();
}

void Simulation::ifWin() {
	if (year == yearWinCondition){
		cout << "You successfully survived long enough to finally merge \
		with super TAFE and win a fat check. Congratulations!" << endl;
	}
}

//functions ripped from university class
/*
string Simulation::rippedUniName() {
	return uniObject.getUniName();
}

int Simulation::rippedMoneyReserve() {
	return uniObject.getMoneyReserve();
}

int Simulation::rippedHate() {
	return uniObject.getHate();
}

void Simulation::rippedSetStudents(int newStudents){
	students = newStudents;
}

void University::setMoney(int newMoney){
	moneyReserve = newMoney;
}

void University::setHate(int newHate){
	hate = newHate;
}
*/