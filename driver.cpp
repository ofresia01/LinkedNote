// Program: Program 1
// Author: Owen Fresia
// File Name: driver.cpp
// Date: 13/03/2022
// Description: CPP file testing functionality of classes.
#include "NoteList.cpp"
#include <string>
#include <iostream>
#include <fstream>

int main() {
	NoteList nl;
	fstream infile;
	string c, d, s, b;
	infile.open("notes.txt");
	while (!infile.eof()) {
		infile.ignore(9);
		getline(infile, c);
		infile.ignore(5);
		getline(infile, d);
		infile.ignore(8);
		getline(infile, s);
		infile.ignore(5);
		getline(infile, b);
		Note n(c, d, s, b);
		nl.addNote(n);
		infile.ignore(10);
	}
}