// LinkedList.h

////#pragma once

//using namespace System;

#ifndef List_H
#define List_H

class List {

private:
	typedef struct node{
		int data;
		node* next;
	}*nodePtr;

	nodePtr head;
	nodePtr current;
	nodePtr temp;
public:
	List();
	void addNode(int dat);
	void addFront(int dat);
	void addAfter(int dat, int val);
	void delNode(int dat);
	void reverse();
	void showList();
	bool isEmpty();



};
#endif