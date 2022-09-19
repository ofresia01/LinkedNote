// Program: Program 1
// Author: Owen Fresia
// File Name: Date.cpp
// Date: 13/03/2022
// Description: CPP file containing function definitions for Date class.
#include "Date.h"
using namespace std;

void Date::setDate(string d) {
	string monthStr = d.substr(0, 2);
	string dayStr = d.substr(3, 2);
	string yearStr = d.substr(6, 2);
	month = stoi(monthStr);
	day = stoi(dayStr);
	year = stoi(yearStr);
}

string Date::showDate() {
	string str = to_string(month) + '-' + to_string(day) + '-' + to_string(year);
	return str;
}

int Date::calculateDays() {
	return year * 365 + month * 31 + day;
}