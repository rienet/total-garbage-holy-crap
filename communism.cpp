#include "communism.h"

void Communism::action(University uniObject){

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