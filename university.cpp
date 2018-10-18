#include <iostream>
#include "university.h"
using namespace std;

University::University() {
	string uniName = "adelaideUni";
	students = 10000;
	moneyReserve = 10000000;
	hate = 100;
	fees = 5;
}

//University cost 100000 to operate every year
void University::yearlyMoneyDrain() {
	moneyReserve = moneyReserve - 100000;
	if (moneyReserve<=0){
		moneyReserve=0;
	}
}

int University::getStudents() {
	return students;
}

int University::getMoneyReserve() {
	return moneyReserve;
}

int University::getHate() {
	return hate;
}

void University::setStudents(int newStudents){
	students = newStudents;
}

void University::setMoney(int newMoney){
	moneyReserve = newMoney;
}

void University::setHate(int newHate){
	hate = newHate;
}

//raises student fees, students obviously would get angry
void University::raiseFees() {
	fees = fees*1.2;
	hate = hate + 30;
}

//collection of total student fees every year
void University::collectFees() {
	int totalFee = fees*students;
	moneyReserve =moneyReserve + totalFee;
}
