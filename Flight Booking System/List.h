// Specification file for the List class
#ifndef LIST_H
#define LIST_H

#include "Node.h"

class List {
	private:
		Node* Head;
	public:
		List() { Head = NULL; }
		~List();

		bool IsEmpty() { return (Head == NULL); }
		Node* InsertNode(double x);
		int FindNode(double x);
		int DeleteNode(double x);
		void DisplayList(void);
};

#endif