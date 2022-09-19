// Program: Program 1
// Author: Owen Fresia
// File Name: Note.h
// Date: 13/03/2022
// Description: Header file containing framework for Note class
#include <string>
#include "Date.h"
using namespace std;

class Note {
private:
	string composer;
	Date date;
	string subject;
	string body;

public:
	Note(string, string, string, string);
	Note();
	string getComposer();
	Date getDate();
	string getSubject();
	string getBody();
};