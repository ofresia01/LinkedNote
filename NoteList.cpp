// Project: Project 1
// Author: Owen Fresia
// File Name: NoteList.cpp
// Date: 13/03/2022
// Description: CPP file containing function definitions for
// traversal and modification of NoteList linked list.
#include "NoteList.h"

NoteList::NoteList() {
	size = 0;
	head = NULL;
}

int NoteList::getSize() {
	return size;
}

void NoteList::setSize(int s) {
	size = s;
}

void NoteList::addNote(Note n) {
	noteNode* newNode;
	noteNode* nodePtr;
	noteNode* preNode = NULL;

	newNode = new noteNode;
	newNode->note = n;

	nodePtr = head;
	while (nodePtr != NULL) {
		preNode = nodePtr;
		nodePtr = nodePtr->next;
	}

	if (preNode == NULL) {
		newNode->next = head;
		head = newNode;
	}

	else {
		preNode->next = newNode;
		newNode->next = nodePtr;
	}
	size += 1;
}

Note NoteList::findNote(int index) {
	noteNode* current = head;

	int count = 0;
	while (current != NULL) {
		if (count == index) {
			return (current->note);
		}
		count++;
		current = current->next;
	}
}

void NoteList::deleteNote() {
	if (head->next == NULL) {
		delete head;
	}

	noteNode* preNode = head;
	while (preNode->next->next != NULL) {
		preNode = preNode->next;
	}

	delete preNode->next;
}