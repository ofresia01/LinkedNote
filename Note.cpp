// Program: Program 1
// Author: Owen Fresia
// File Name: Note.cpp
// Date: 13/03/2022
// Description: CPP file containing function definitions for Note class
#include "Note.h"

Note::Note(string c, string d, string s, string b) {
	composer = c;
	date.setDate(d);
	subject = s;
	body = b;
}

string Note::getComposer() {
	return composer;
}

Date Note::getDate() {
	return date;
}

string Note::getSubject() {
	return subject;
}

string Note::getBody() {
	return body;
}