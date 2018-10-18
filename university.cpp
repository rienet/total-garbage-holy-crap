#include <iostream>
#include "university.h"
using namespace std;

University::University() {
	string uniName = "adelaideUni";
	students = 10000;
	moneyReserve = 1000000;
}

void University::yearlyMoneyDrain() {
	moneyReserve = moneyReserve - 100000;
}

string University::getUniName() {
	return uniName;
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