#include <limits>
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include "simulation.h"
#include "nuclearbomb.h"
#include "newclub.h"
#include "communism.h"
using namespace std;

void gameIntro();
void gameReport(Simulation sim, University uni, bool currencySwitch);
extern void nukeAction(University uniObject);

int main() {

	University adelaideUni;
	Simulation uniSim;
	bool clubMaster = true;
	bool needToSwitch = false;

	bool simLooper = true;

	Event *events[3];
	events[0] = new NuclearBomb;
	events[1] = new NewClub;
	events[2] = new Communism;

	while(simLooper == true) {

		if (uniSim.getYear() == 0){
			gameIntro();
			gameReport(uniSim, adelaideUni, needToSwitch);
		} else {
			srand (time(NULL));
			int randomNum = rand() % 3;
			events[randomNum]->action(adelaideUni);
			adelaideUni.setStudents(events[randomNum] -> getStudents());
			adelaideUni.setMoney(events[randomNum] -> getMoney());
			adelaideUni.setHate(events[randomNum] -> getHate());

			if (randomNum == 0) {
				needToSwitch = true;
			}

			if (randomNum == 1) {
				clubMaster = true;
			}

			if (randomNum == 2) {

			}

			gameReport(uniSim, adelaideUni, needToSwitch);
		}

		string userInput = "0";
		bool inputLooper = true;
		
		bool inputBoolean[4] = {true, true, true, false};
		if (clubMaster == true) {
			inputBoolean[3] = true; 
		}


		while(inputLooper = true) {
			cin >> userInput;
			if (userInput == "nextYear" && inputBoolean[0] == true){
				inputBoolean[0] == false;
				uniSim.yearlyTick(adelaideUni);
				adelaideUni.yearlyMoneyDrain();

				userInput = "0";
				break;

			} else if(userInput == "raiseFees" && inputBoolean[1] == true){
				inputBoolean[1] == false;
				cin.clear();
				cout << "raised fees" << endl;
				adelaideUni.raiseFees();

			} else if(userInput == "takeAWalk" && inputBoolean[2] == true){
				inputBoolean[2] == false;

			} else if(userInput == "scrapArts" && inputBoolean[3] == true){
				inputBoolean[3] == false;

			} else {
				cout << "Please choose an option below that you haven't picked already, and try to spell it correctly too: " << endl << "nextYear" << endl;
				cout << "raiseFees" << endl << "takeAWalk" << endl;

				if(clubMaster == true) {
					"scrapArts";
				}

			}
		}

		cout << "______" << endl;

		uniSim.ifWin();
		if (uniSim.getYear() == 20) {
			delete [] events;
			break;
		}

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