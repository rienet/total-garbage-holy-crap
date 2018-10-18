##include <limits>
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include "simulation.h"
#include "nuclearbomb.h"
#include "newclub.h"
#include "communism.h"
#include "military.h"
using namespace std;

//introduces the game
void gameIntro();
//gives a report on statistics for the current year
void gameReport(Simulation sim, University uni, bool currencySwitch);
//see event.cpp
void gameWin(int year, int money, int student, int hate);

int main() {

	University adelaideUni;
	Simulation uniSim;
	//status as clubmaster is set false until the club event is called
	bool clubMaster = false;
	//currency changes after the nuclear event
	bool aftermathCurrency = false;
	//simLooper keeps the simulation looping as long as its true 
	bool simLooper = true;

	//declaring pointers to events
	Event *events[4];
	events[0] = new NuclearBomb;;
	events[1] = new NewClub;
	events[2] = new Communism;
	events[3] = new Military;

	while(simLooper==true) {

		//when the game begins, gives intro and intial report
		if (uniSim.getYear() == 0){
			gameIntro();
			gameReport(uniSim, adelaideUni, aftermathCurrency);
		//game continues normally
		} else {
			//used to generate a seed for truly random numbers between 0-3
			srand (time(NULL));
			int randomNum = rand() % 4;
			/*calls event corresponding to random number, and the 
			updates adelaideUni accordingly*/
			events[randomNum]->action(adelaideUni);
			adelaideUni.setStudents(events[randomNum] -> getStudents());
			adelaideUni.setMoney(events[randomNum] -> getMoney());
			adelaideUni.setHate(events[randomNum] -> getHate());

			//sets appropriate values for the events called
			if (randomNum == 0) {
				aftermathCurrency = true;
			}

			if (randomNum == 1) {
				clubMaster = true;
			}

			//event asks for a yes or no prompt 
			if (randomNum == 2) {
				string yesOrNo;
				cout << "You wanna stick with communism or nah back to capitalism? Answer with [y/n]." << endl;
				//bool variable loops the input until an appropriate answer is given
				bool InputLoopermk2 = true;
				while(InputLoopermk2){
					cin >> yesOrNo;

					if (yesOrNo == "y") {
						cout << "Stuck with communism" << endl;
						break;

					} else if (yesOrNo == "n") {
						cout << "Stuck with capitalism. The communist party is angry now" << endl;
						adelaideUni.setHate(adelaideUni.getHate() + 50);
						break;

					} else {
						cout << "How hard is it to answer with [y/n]?" << endl;
					}
				}
			}
			//reports back current year statistics
			gameReport(uniSim, adelaideUni, aftermathCurrency);
		}

		//bool variable acts the same as the yes/no prompt
		bool inputLooper = true;
		string userInput;
		//once a valid option is chosen, the next year rolls over
		while(inputLooper) {
			cin >> userInput;

			//rolls to next year without doing anything
			if (userInput == "nextYear"){
				uniSim.yearlyTick(adelaideUni);
				adelaideUni.yearlyMoneyDrain();
				adelaideUni.collectFees();
				break;

			//raises student fees
			} else if(userInput == "raiseFees" ){
				cout << "raised fees" << endl;
				adelaideUni.raiseFees();

				uniSim.yearlyTick(adelaideUni);
				adelaideUni.yearlyMoneyDrain();
				adelaideUni.collectFees();
				break;

			//special case for club event
			} else if(userInput == "scrapArts" && clubMaster == true){
				clubMaster = false;
				adelaideUni.setHate(adelaideUni.getHate() - 50);
				adelaideUni.setMoney(adelaideUni.getMoneyReserve() + 10000);

				uniSim.yearlyTick(adelaideUni);
				adelaideUni.yearlyMoneyDrain();
				adelaideUni.collectFees();
				break;

			} else {
				cout << "Please choose an option below that you haven't picked already, and try to spell it correctly too: " << endl << "nextYear" << endl;
				cout << "raiseFees" << endl;

				if(clubMaster == true) {
					cout << "scrapArts" << endl;

				}

			}
		}

		cout << "______" << endl;
		
		if ((uniSim.getYear()==20)){
			gameWin((uniSim.getYear()), (adelaideUni.getMoneyReserve()),(adelaideUni.getStudents()),(adelaideUni.getHate()));
			simLooper=false;
		}
		

	}
	if(clubMaster == true) {
		cout << "You were a clubmaster in this sim!" << endl;
	}

}

void gameIntro() {
	cout << "Hi welcome to the university stimulator. This is pretty much a text-based management sim." << endl << endl;
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

void gameWin(int year, int money, int student, int hate) {
	if((year==20) && (money>=1) && (hate>=0) && (student>0)){
		cout<<"CONGRADULATIONS. YOU WIN.....:)"<<endl;
	}
	else{
		cout<<"TOO BAD YOU LOOSE......:("<<endl;
	}
}


