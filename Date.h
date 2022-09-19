// Program: Program 1
// Author: Owen Fresia
// File Name: Date.h
// Date: 13/03/2022
// Description: Header file containing framework for Date class.
#include <string>
using namespace std;

class Date {
private:
	int month, day, year;

public:
	Date();
	void setDate(string);
	string showDate();
	int calculateDays();
};