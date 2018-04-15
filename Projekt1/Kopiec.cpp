#include "Kopiec.h"
#include <iostream>
#include <fstream>

using namespace std;

Kopiec::Kopiec(){

	
		Tab = NULL;
		rozmiar = 0;

}	

void Kopiec::push(int x){
	int *kopia=new int[rozmiar+1];
	for(int i=0;i<rozmiar;i++){
		kopia[i]=Tab[i];
	}
	kopia[rozmiar]=x;
	rozmiar++;
	delete Tab;
	Tab=kopia;
	kopia=NULL;
	Kopiec::push_sort(rozmiar-1);
}

void Kopiec::push_sort(int index){
	if(index != 0){
		int rodzic = floor((index-1)/2);
		if(Tab[rodzic]<Tab[index]){
			swap(Tab[rodzic], Tab[index]);
			Kopiec::push_sort(rodzic);
		}
	}
	
	
}

void Kopiec::pop(int index){
	
	if(index<rozmiar){
		if(index==(rozmiar-1)){
			rozmiar--;
			int *kopia = new int [rozmiar];
			for(int i=0;i<rozmiar; i++){
				kopia[i]=Tab[i];
			}
			delete Tab;
			Tab=kopia;
			kopia=NULL;
		}else {
			rozmiar--;
			Tab[index]=Tab[rozmiar];
			int *kopia = new int [rozmiar];
			for(int i=0;i<rozmiar; i++){
				kopia[i]=Tab[i];
			}
			delete Tab;
			Tab=kopia;
			kopia=NULL;
			Kopiec::pop_sort(index);
		}
	} else cout<<"Index > rozmiar\n";
	
}

void Kopiec::pop_element(int x){
	if(rozmiar){
		for(int i=0;i<rozmiar;i++){
			if(Tab[i]==x){
				Kopiec::pop(i);
			}
		}
		
	}else cout<<"Stworz najpierw kopiec";
	
}

void Kopiec::pop_sort(int index){
	int dziecko_lewe = (2 * index + 1);	
	int dziecko_prawe = (2 * index + 2);

	if(dziecko_lewe <= rozmiar-2 && dziecko_prawe<=rozmiar-1){
		if(Tab[dziecko_lewe]>=Tab[dziecko_prawe]){
			swap(Tab[dziecko_lewe],Tab[index]);
			Kopiec::pop_sort(dziecko_lewe);
		}else if(Tab[dziecko_lewe]<Tab[dziecko_prawe]){
			swap(Tab[dziecko_prawe],Tab[index]);
			Kopiec::pop_sort(dziecko_prawe);
		}
		}else if(dziecko_lewe <= rozmiar-2 && dziecko_prawe>rozmiar-1){
			if(Tab[dziecko_lewe]>=Tab[dziecko_prawe]){
			swap(Tab[dziecko_lewe],Tab[index]);
		}
		}else if(rozmiar > 1 && rozmiar <3){
			if(Tab[dziecko_lewe]>Tab[index]){
			swap(Tab[dziecko_lewe],Tab[index]);
		}
	}
	
}

void Kopiec::printKop(int pos, int lvl){
	if (rozmiar == 0) {
		cout << "Kopiec jest pusty.\n";
	}
	else if (pos <= rozmiar)
	{
		std::cout << "\nPoziom " << lvl << ":\t";
		if (pos * 2 <= rozmiar)
		{
			for (int i = pos - 1; i < pos * 2 - 1; i++)
			{
				std::cout << Tab[i] << "\t";
			}
			cout << "\n";
			printKop(pos * 2, ++lvl);
		}
		else
		{
			for (int i = pos - 1; i < rozmiar; i++)
			{
				cout << Tab[i] << "\t";
			}
			cout << "\nIlosc elementow w kopcu: " << rozmiar << "\n";
		}
	}
}



bool Kopiec::find(int x){
	if(rozmiar>0){
		for(int i=0;i<rozmiar;i++){
		if(Tab[i]==x){
		return true;
		}
		}
		return false;
	}
	cout<<"Stworz najpierw kopiec\n";

	
}


Kopiec::~Kopiec()
{
	delete[] Tab;
}

