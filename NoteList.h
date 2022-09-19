// Project: Project 1
// Author: Owen Fresia
// File Name: NoteList.h
// Date: 13/03/2022
// Description: Header file containing framework for NoteList linked list
#pragma once
#include "Note.cpp"

class NoteList {
	struct noteNode {
		Note note;
		noteNode* next;
	};

private:
	int size;
	noteNode* head;

public:
	NoteList();
	int getSize();
	void setSize(int);
	void addNote(Note);
	Note findNote(int);
	void deleteNote();
};