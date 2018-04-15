#include <iostream>
#include <stdlib.h>
#include <time.h>
#pragma once
struct listaJednokierunkowa
{
	listaJednokierunkowa *next;
	int value;
};


class Lista{
	
protected:
	listaJednokierunkowa *next;
	listaJednokierunkowa *head;
	int rozmiar;
	
public:
	Lista();
	~Lista();
	void addFront(int);
	void addEnd(int);
	void addRandome(int );
	void addElemIndex(int, int);
	void delFront();
	void delEnd();
	void delRandome();
	void delElement(int);
	
	void printList();
	bool searchValue(int);

};
