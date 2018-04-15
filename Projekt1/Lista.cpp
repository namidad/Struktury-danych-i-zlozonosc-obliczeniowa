#include <iostream>
#include "Lista.h"
using namespace std;

Lista::Lista(){
	rozmiar=0;
	next = NULL;	
	head=NULL;
	srand (time(NULL));
}

Lista::~Lista(){
	next=NULL;
	head=NULL;
}

void Lista::addFront(int x){
	listaJednokierunkowa *p = head;
	p=new listaJednokierunkowa;
	p->value=x;
	p->next=head;
	head = p;
	rozmiar++;
}

void Lista::addEnd(int x){
	listaJednokierunkowa *p,*n;
	n=new listaJednokierunkowa;
	n->value=x;
	n->next=NULL;
	p=head;

	if(p){
		while(p->next){
		p=p->next;
	}	
	p->next=n;
	
	}else{
		head=n;
		head->next=NULL;
	}
	rozmiar++;
}

void Lista::addRandome(int x){
	
	if(rozmiar>0){
listaJednokierunkowa *p, *n;
	p=head;
	n = new listaJednokierunkowa;
	n->value=x;
	int i=0;

	int index=rand() %rozmiar;
	bool check=true;



		do{
				if(i == index){
				n->next=p->next;
				p->next=n;
				check=false;
			   	}else if(p->next->next){
					   p=p->next;
					   i++;
			} else check=false;	
			}while(check);
	}else {
		cout<< "\nLista pusta\n";
	}
	rozmiar++;
}

void Lista::addElemIndex(int searchValue,int x){
	listaJednokierunkowa *p, *n;
	p=head;
	n = new listaJednokierunkowa;
	n->value=x;
	
	bool check=true;
	if(p){
		do{
				if(p->value == searchValue){
				n->next=p->next;
				p->next=n;
				check=false;
			   	}else if(p->next){
					   p=p->next;
					   
				} else check=false;
			}while(check);
	}else {
		cout<< "\nLista pusta\n";
	}
	rozmiar++;
}


void Lista::delFront(){
	listaJednokierunkowa *p;
	p=head;
	if(rozmiar>0){
	if(p){
		head=head->next;
		delete p;
	} else {
		cout<< "Lista pusta\n";
	}
	rozmiar--;
	  } else cout<<"Lista pusta\n";	
	}
	

void Lista::delEnd(){
	listaJednokierunkowa *p;
	p=head;
	if(rozmiar>0){
		if(p){
		if(p->next){
			while(p->next->next) p=p->next;	
			delete p->next;
			p->next=NULL;
		}
	}else {
		delete p;
		head = NULL;
	}
		rozmiar--;
	}else cout<<"Lista pusta\n";
	
}


void Lista::printList(){
	if(rozmiar>0){
	int i=1;
	listaJednokierunkowa *p;
	p = head;
	while(p){
		if(i!=rozmiar){
		cout << p->value<< "->";
		p=p->next;
		i++;
		} else {
		cout << p->value<<"\n";
		p=p->next;

		}
	}	
	}else cout<<"Lista pusta \n";
	
}

 void Lista::delRandome(){

	
	if(rozmiar>0){
int index=rand() %rozmiar;
	int i=0;

	bool check=true;
	listaJednokierunkowa *p,*n;
	p=head;
	n = new listaJednokierunkowa;
		do{
			if(index==0){	
			head=head->next;
		   	delete p;
		   	check=false;
		   	
			}else if((i+1) == index){	
					n->next=(p->next)->next;
					delete p->next;
					check=false;    					
					p->next=n->next;
					delete n;
			   	}else if (p->next){
					   p=p->next;
						i++;
				} else {
					delete p;
					check=false;
				}
			}while(check);
		rozmiar--;
	}else cout<< "\nLista pusta\n";
	
}

bool Lista::searchValue(int x){
	listaJednokierunkowa *p;
	p=head;
	if(p){
		while(p){
			if(p->value == x) {
			return true;	
			}else p=p->next;
		}
		return false;
	}
}


void Lista::delElement(int x){
	listaJednokierunkowa *p,*n;
	p=head;
	int index=1;
	n = new listaJednokierunkowa;
	bool check=true;
	if(p){
		do{
		
			if(index==1 && p->value == x){	
			head=head->next;
		   	delete p;
		   	check=false;
		   	
			}else if((p->next)->value == x){	

					n->next=(p->next)->next;
					delete p->next;
					check=false;    					
					p->next=n->next;
					delete n;
			   	}else if (p->next->next){
			   	
					   p=p->next;
						index++;
						
				} else {
					cout<<"Brak takiej wartosci";
					check=false;
				}
				
			}while(check);
	}else {
		cout<< "\nLista pusta\n";
	}
	rozmiar--;
	
}














