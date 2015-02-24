// This is the main DLL file.

#include "Stdafx.h"

#include "List.h"
#include <cstdlib>
#include <iostream>

using namespace std;

List::List()
{
	head = NULL;
	current = NULL;
	temp = NULL;

}

/*add a node to the end of a linked list
requires parameter of type int
*/
void List::addNode(int dat)
{
	nodePtr N = new node;
	N->next = NULL;
	N->data = dat;

	if (head != NULL)
	{
		current = head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = N;
	}
	else
		head = N;
}
/* adds a node to the beginning of a linked list
requires 1 parameter of type int
*/

void List::addFront(int dat)
{
	
	nodePtr N = new node;
	N->data = dat;
	if (isEmpty())
	{
		head = N;
		N->next = NULL;
	}
	else
	{
		N->next = head;
		head = N;
	}

}
/*
adds a node after an existing node in a linked list
requires 2 parameters of type int
*/
void List::addAfter(int dat, int val)
{
	nodePtr N = new node;
	N->data = val;

	if (head != NULL)
	{
		current = head;
		while ((current->next != NULL) && (current->data!=dat))
		{
			current = current->next;

		}
		if (current->next == NULL)
		{
			current->next = N;
			N->next = NULL;
		}
		else
		{
			temp = current->next;
			N->next = temp;
			current->next = N;
		}

	}

}
/*
removes a node from a linked list
requires 1 paremeter of type int
*/

void List::delNode(int dat)
{
	nodePtr deletePtr = NULL;
	if (isEmpty())
	{
		cout << "The list is empty";
		return;
	}
	if (head->data == dat)
	{
		current = head->next;
		head = deletePtr;
		delete deletePtr;
		head = current;
		return;
	}

	temp = head;
	current = head;

	while ((current != NULL) && (current->data != dat))
	{
		temp = current;
		current = current->next;
	}
	if (current == NULL)
	{
		cout << dat << " is not in the list\n";
		delete deletePtr;
	}
	else
	{
		deletePtr = current;
		current = current->next;
		temp->next = current;
		delete deletePtr;
	}
}

/*method to reverse the elements of a linked list, ie head becomes tail, tail becomes head
*/
void List::reverse()
{
	if (isEmpty())
	{
		cout << "The list is empty\n";
		return;
	}
		

	current = head;
	temp = current->next;
	current->next = NULL;
	nodePtr temp2;

	while (temp != NULL)
	{
		temp2 = temp->next;
		temp->next = current;
		current = temp;
		temp=temp2;		
	}
	head = current;

}
/*method to display the elements of a linked list
*/
void List::showList()
{
	if (isEmpty())
	{
		cout << "The list is empty\n";
		return;
	}
	cout << endl;
	current = head;
	while (current != NULL)
	{
		
		cout << current->data << endl;
		current = current->next;
	}

}

/*method to determine if a linked list is empty
returns type boolean
*/

bool List::isEmpty()
{
	if (head == NULL)
		return true;
	else
		return false;
}


