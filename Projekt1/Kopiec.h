#include <fstream>
#include <iostream>
#include <stdlib.h>
#include <math.h>
#pragma once
class Kopiec
{
protected:
	int rozmiar;
	int* Tab;

public:
	bool find(int);
	void push(int);
	void pop(int);
	void pop_sort(int);	
	void push_sort(int);
	void printKop(int,int);
	void pop_element(int);
	Kopiec();					
	~Kopiec();
	

};
