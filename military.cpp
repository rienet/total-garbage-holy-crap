#include "military.h"
#include <iostream>
#include <string>
using namespace std;

void Military::action(University uniObject){
	string textEvent = "The military approaches you to support your university with more funding. You get guns that you sell for money, however the military wants some of your graduates and unfortunately your popularity decreases a bit.";
	cout<<"The military approaches you to support your university with more funding. You get guns that you sell for money, however the military wants some of your graduates and unfortunately your popularity decreases a bit."<<endl;
	int moreMoney = uniObject.getMoneyReserve();
	moreMoney = moreMoney*1.8;
	newMoney = moreMoney;

	int lessStudents = uniObject.getStudents();
	lessStudents = lessStudents*0.8;
	newStudents = lessStudents;

	int moreHate = uniObject.getHate();
	moreHate = moreHate + 10;
	newHate = moreHate;
}

int Military::getStudents() {
	return newStudents;
}

int Military::getMoney() {
	return newMoney;
}

int Military::getHate() {
	return newHate;
}

void Military::displayEvent() {
	cout << textEvent << endl;
}
