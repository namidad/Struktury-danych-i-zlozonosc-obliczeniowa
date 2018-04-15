#include "Tablica.h"
#include <iostream>

using namespace std;

Tablica::Tablica()
{
	rozmiar = 0;
	srand (time(NULL));
};


Tablica::~Tablica()
{

	rozmiar = 0;
	delete[] tab;
	tab = 0;
};

void Tablica::addFrontTab(int x){
	rozmiar++;
	int *copy = new int [rozmiar];
	copy[0]=x;
	for(int i=1;i<rozmiar;i++){
		copy[i]=tab[i-1];
	}
	delete[] tab;
	tab=copy;
	copy=NULL;
}

void Tablica::addEndTab(int x){
	rozmiar++;
	int *copy = new int [rozmiar];
	for(int i=0;i<rozmiar-1;i++){
		copy[i]=tab[i];
	}
	delete tab;
	copy[rozmiar-1]=x;
	tab=copy;
	copy=NULL;
}

void Tablica::addRandomeTab(int x){
	
	int index=rand() %rozmiar;
	int *copy = new int [rozmiar+1];
	for(int i=0;i<index;i++){
		copy[i]=tab[i];
	}
	copy[index]=x;
	for(int i=index;i<rozmiar;i++){
		copy[i+1]=tab[i];
	}
	delete[] tab;
	tab=copy;
	copy=NULL;
	rozmiar++;

}

void Tablica::addIndex(int index,int x){
	if(rozmiar==0){
	rozmiar++;
	int *copy = new int [rozmiar];
	copy[0]=x;
	delete[] tab;
	tab=copy;
	copy=NULL;

}else if(index<rozmiar){
		rozmiar++;
		int *copy= new int [rozmiar];
		for(int i=0;i<index;i++){
			copy[i]=tab[i];
		}
		copy[index]=x;
		for(int i=index;i<rozmiar;i++){
			copy[i+1]=tab[i];
		}
		delete[] tab;
		tab=copy;
		copy=NULL;
	}else cout<<"index>rozmiar\n";
	
	
}

void Tablica::delFrontTab(){
	if(rozmiar>1){
		rozmiar--;
		int *copy = new int [rozmiar];
		for(int i=0;i<rozmiar;i++){
			copy[i]=tab[i+1];
		}
		delete[] tab;
		tab=copy;
		copy=NULL;
	}else if(rozmiar==1){
		rozmiar--;
		tab=NULL;
	}else{
		cout<<"Tablica jest pusta. Stworz tablice\n";
	}
}

void Tablica::delEndTab(){
	if(rozmiar>1){
		rozmiar--;
		int *copy= new int [rozmiar];
		for(int i=0;i<rozmiar;i++){
			copy[i]=tab[i];
		}
		delete[] tab;
		tab=copy;
		copy=NULL;
	}else if(rozmiar==1){
		rozmiar--;
		tab=NULL;
	}else{
		cout<<"Tablica jest pusta. Stworz tablice\n";
	}
}

void Tablica::delRandomeTab(){
if(rozmiar>0){
	
	int index=rand() %rozmiar+1;
	if(index>=0 && index < rozmiar){
		if(rozmiar > 0){
			if(index==rozmiar){
				rozmiar--;
				int *copy = new int [rozmiar];
				for(int i=0;i<rozmiar;i++){
					copy[i]=tab[i];
				}
				delete[] tab;
				tab=copy;
				copy=NULL;
			}else if(index>=0 || index< (rozmiar-1)){
				
				int *copy = new int [rozmiar-1];
				for(int i=0;i<index;i++){
					copy[i]=tab[i];
				}
				for(int i=index;i<rozmiar;i++){
					copy[i]=tab[i+1];
				}
				delete[] tab;
				tab=copy;
				rozmiar--;
				copy=NULL;
			}
		}
	}
	
}else cout<<"Tablica jest pusta. Stworz tablice\n";

}

bool Tablica::szukaj(int x){
	for(int i=0;i<rozmiar;i++){
		if(tab[i]==x){
			return true;
		}
	
	}
	return false;
}

void Tablica::delIndex(int index){
	if(index<rozmiar){
	if(index>=0 && index < rozmiar){
		if(rozmiar > 0){
			if(index==rozmiar){
				rozmiar--;
				int *copy = new int [rozmiar];
				for(int i=0;i<rozmiar;i++){
					copy[i]=tab[i];
				}
				delete[] tab;
				tab=copy;
				copy=NULL;
			}else if(index>=0 || index< (rozmiar-1)){
				
				int *copy = new int [rozmiar-1];
				for(int i=0;i<index;i++){
					copy[i]=tab[i];
				}
				for(int i=index;i<rozmiar;i++){
					copy[i]=tab[i+1];
				}
				delete[] tab;
				tab=copy;
				rozmiar--;
				copy=NULL;
			}
		}
	}
	
}else cout<<"Index>rozmiar. Nic nie usuwam. \n";

	
}




void Tablica::printTab(){
	if(rozmiar>0){
		for(int i=0;i<rozmiar;i++){
			cout<<i+1<<". "<<tab[i]<<endl;
		}
	}
}

