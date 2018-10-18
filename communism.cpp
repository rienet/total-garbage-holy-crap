#include "communism.h"
#include <iostream>
#include <string>
using namespace std;

void Communism::action(University uniObject){
	string textEvent = "Australia becomes a communist country, and so obviously your university is affected by this. You share half your money reserves with the common folk, so you gain some more students and a bit of popularity.";
	cout<<"Australia becomes a communist country, and so obviously your university is affected by this. You share half your money reserves with the common folk, so you gain some more students and a bit of popularity."<<endl;
	int lessMoney = uniObject.getMoneyReserve();
	lessMoney = lessMoney/2;
	newMoney = lessMoney;

	int moreStudents = uniObject.getStudents();
	moreStudents = moreStudents*1.3;
	newStudents = moreStudents;

	int lessHate = uniObject.getHate();
	lessHate = lessHate - 20;
	newHate = lessHate;
}

int Communism::getStudents() {
	return newStudents;
}

int Communism::getMoney() {
	return newMoney;
}

int Communism::getHate() {
	return newHate;
}

void Communism::displayEvent() {
	cout << textEvent << endl;
}
