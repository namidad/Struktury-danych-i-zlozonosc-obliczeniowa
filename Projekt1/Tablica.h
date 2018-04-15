#include <fstream>
#include <iostream>
#include <stdlib.h>
#include <time.h>
#pragma once
class Tablica
{
protected:
	int *tab;
	int rozmiar;
	int liczba;
public:
	~Tablica();
	Tablica();
	void addFrontTab(int);
	void addEndTab(int);
	void addRandomeTab(int);
	void addIndex(int,int);
	void delFrontTab();
	void delEndTab();
	void delRandomeTab();
	void delIndex(int);
	void printTab();
	bool szukaj(int);
};
