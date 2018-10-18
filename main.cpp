#include <limits>
#include <iostream>
#include <cstdlib>
#include "simulation.h"
#include "nuclearbomb.h"
using namespace std;

void gameIntro();
void gameReport(Simulation sim, University uni, bool currencySwitch);
extern void nukeAction(University uniObject);

int main() {

	University adelaideUni;
	Simulation uniSim;
	bool needToSwitch = false;

	bool simLooper = true;

	while(simLooper == true) {

		if (uniSim.getYear() == 0){
			gameIntro();
			gameReport(uniSim, adelaideUni, needToSwitch);
		} else {
			Event *events[1];
			events[0] = new NuclearBomb;
			int randomNum = rand() % 1;
			events[randomNum]->action(adelaideUni);
			adelaideUni.setStudents(events[randomNum]->getStudents());

			if (randomNum == 0) {
				needToSwitch = true;
			}
			gameReport(uniSim, adelaideUni, needToSwitch);
		}

		string userInput = "0";
		bool inputLooper = true;
		
		while(inputLooper = true) {
			cin >> userInput;
			if (userInput == "1"){
				uniSim.yearlyTick(adelaideUni);
				adelaideUni.yearlyMoneyDrain();

				userInput = "0";
				cout << uniSim.getYear() << endl;
				break;
			} else {
				cout << "Please input 1" << endl;
			}
		}

		cout << "______" << endl;

		uniSim.ifWin();

	}
	
}

void gameIntro() {
	cout << "Hi welcome to game lol" << endl << endl;
}

void gameReport(Simulation sim, University uni, bool currencySwitch) {
	string currency = " dollars ";
	if (currencySwitch = true) {
		string currency = " bottle caps ";
	}	
	cout << "It's year " << sim.getYear() << endl;
	cout << "You have " << uni.getMoneyReserve() << currency << "left" << endl;
	cout << "Students: " << uni.getStudents() << endl;
	cout << "Hate level: " << uni.getHate() << endl;
	cout << "What would you like to do?" << endl;
}