#include <cstdlib>
#include<iostream>
#include <stdio.h>
#include "List.h"



using namespace std;

int main()
{ 
	List L;
	int a;
	L.addNode(5);
	L.addNode(15);
	L.addNode(10);
	L.addNode(21);
	L.showList();
	L.delNode(5);
	L.showList();
	L.addAfter(15, 44);
	L.showList();
	L.reverse();
	L.showList();
	L.addFront(77);
	L.showList();

	cin >> a;




}