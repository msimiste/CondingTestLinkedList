#include <cstdlib>
#include<iostream>
#include <stdio.h>
#include "List.h"



using namespace std;

int main()
{ 
	List L;
	int a;
	L.addNode(5); // adding some nodes
	L.addNode(15);
	L.addNode(10);
	L.addNode(21);
	L.showList(); // ensuring the showList is working and nodes have been added
	L.delNode(5); // removing the head
	L.showList(); //ensuring head has been removed
	L.addAfter(15, 44); // adding a node after node 15
	L.showList(); //ensuring 44 was added
	L.reverse(); // reversing the list
	L.showList(); // ensuring list has been reversed
	L.addFront(77); // adding a new head
	L.showList(); //ensuring head was added properly
	L.delNode(44); // removing node 44
	L.showList(); //ensuring 44 was removed

	cin >> a;




}