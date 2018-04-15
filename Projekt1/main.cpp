#include <iostream>
#include <time.h>
#include "Tablica.h"
#include "Lista.h"
#include "Kopiec.h"
#include <fstream>
#include <stdlib.h>
using namespace std;




int main()
{
	
	ifstream plik;
	int element,rozmiar,liczbaDoTablicy,index;
	bool check=true;
	int wybor=0;
	srand(time(NULL));
	Tablica *tab=new Tablica;
	Lista *lis=new Lista;
	Kopiec *kop=new Kopiec;
	std::system("clear");

while(check){
	std::system("clear");
	cout<<"1.Wersja do manulnego wprowadzania wynikow \n2.Wczytaj liczby z pliku \n3.Metody do testowania poprawnosci \n4.Wyjdz\n";
	cout<< "Twoj wybor: ";
	cin>>wybor;
	
	switch(wybor){
	case 1:
	{
	std::system("clear");
	while(check){
		std::system("clear");
		cout << "1.Tablica \n2.Lista \n3.Kopiec \n4.Wyjscie" << endl;
		cout<< "Twoj wybor: ";
		cin>>wybor;
		cout<<endl;
		switch(wybor){
			case 1:
				std::system("clear");
				{ 
					
				while(check){
					
					cout << "\n1.Wyswietl tablice \n2.Dodaj element na poczatek \n3.Dodaj element na koniec \n4.Dodaj element losowo \n5.Usun element pierwszy \n6.Usun element ostatni \n7.Usun losowy element\n8.Znajdz element \n9.Wroc na poczatek" << endl;
					cout<< "Twoj wybor: ";
					cin>>wybor;
					cout<<endl;
					switch(wybor){

						case 1:
							{ 
std::system("clear");
							
							tab->printTab();
					

						}
							break;
						case 2:
							{
std::system("clear");
							cout<<"Podaj wartosc elementu: ";
							cin>>element;
							
							tab->addFrontTab(element);
							

						}
							break;
						case 3:
							{
std::system("clear");
							cout<<"Podaj wartosc elementu: ";
							cin>>element;

							tab->addEndTab(element);
							

						}
							break;
						case 4:
							{std::system("clear");

							cout<<"Podaj wartosc elementu: ";
							cin>>element;

							tab->addRandomeTab(element);
							

						}
							break;
						case 5:
							{
std::system("clear");

							tab->delFrontTab();
							

						}
							break;
						case 6:
						{

std::system("clear");
							tab->delEndTab();
							

						}
							break;
						case 7:
						{

std::system("clear");
							tab->delRandomeTab();
							

						}
							break;
						case 8:
							{
std::system("clear");
							cout<<"Podaj wartosc poszukiwanego elementu: ";
							cin>>element;

							if(tab->szukaj(element)){
								cout << endl << "Element znaleziony."<<endl;
							}else cout << endl << "Element nie znaleziony."<<endl;
							
							
							
						}
							break;
						case 9:
std::system("clear");
							check=false;
							break;
						default:
							cout<<"Sprobuj ponownie...\n";
							break;			
					}
					
				}
			
				}
				break;
				
				
				
			case 2:
				std::system("clear");
				{
					
				std::system("clear");
				while(check){
			
					cout << "1.Wyswietl liste \n2.Dodaj element na poczatek \n3.Dodaj element na koniec \n4.Dodaj element losowo \n5.Usun element pierwszy \n6.Usun element ostatni \n7.Usun losowy element\n8.Znajdz element \n9.Wroc na poczatek" << endl;
				
					cout<< "Twoj wybor: ";
					cin>>wybor;
					cout<<endl;
					switch(wybor){
						case 1:
						{

std::system("clear");
							lis->printList();
						

						}
							break;
						case 2:
							{
std::system("clear");
							cout<<"Podaj wartosc elementu: ";
							cin>>element;

							lis->addFront(element);
						

						}
							break;
						case 3:
							{
std::system("clear");
							cout<<"Podaj wartosc elementu: ";
							cin>>element;

							lis->addEnd(element);
							

						}
							break;
						case 4:
							{
std::system("clear");
							cout<<"Podaj wartosc elementu: ";
							cin>>element;

							lis->addRandome(element);
							

						}
							break;
						case 5:
							{
std::system("clear");

							lis->delFront();
							

						}
							break;
						case 6:
							{
std::system("clear");

							lis->delEnd();
							

						}
							break;
						case 7:
						{
std::system("clear");
							

							lis->delRandome();
							

						}
							break;
						case 8:
						{
std::system("clear");
							cout<<"Podaj wartosc elementu: ";
							cin>>element;

							if(lis->searchValue(element)){
							
							cout << endl << "Znaleziono element." <<endl;
							}else {
							
							cout << endl << "Nie znaleziono elementu."<<endl;
							}
							
						}
							break;
						case 9:
std::system("clear");
							check=false;
							break;
						default:
							cout<<"Sprobuj ponownie...\n";
							break;			
					}
					
				}
				check=true;
				}
				break;
				
				
				
				
							
			case 3:
				std::system("clear");
				{

	
				std::system("clear");
				
				while(check){
					cout << "1.Wyswietl kopiec \n2.Dodaj element  \n3.Usun element \n4.Znajdz element \n5.Wroc na poczatek" << endl;
					cout<< "Twoj wybor: ";
					cin>>wybor;
					cout<<endl;
					switch(wybor){
						case 1:
							{

						std::system("clear");
							kop->printKop(1,1);
							

						}
							break;
						case 2:
							{
std::system("clear");
							cout<<"Podaj wartosc elementu: ";
							cin>>element;

							kop->push(element);
							

						}
							break;
						case 3:
						{
std::system("clear");
							cout<<"Podaj indeks klucza: ";
							cin>>element;

							kop->pop(element);

						}
							break;
						case 4:
							{
std::system("clear");
							cout<<"Podaj wartosc elementu: ";
							cin>>element;

							if(kop->find(element)){
							
							cout << endl << "Element znaleziony." <<endl;
							}else {
							
							cout << endl << "Element nie znaleziony." <<endl;
							}

						}
							break;
						case 5:
std::system("clear");
							check=false;
							break;
						default:
							cout<<"Sprobuj ponownie...\n";
							break;			
					}
					
				}
				check=true;
				}
				break;
				

			
			case 4:
			std::system("clear");
			check=false;
			break;
			default:	
			cout<<"Sprobuj ponownie.. \n";
			break;
		}
		
	}
	
	}
	check=true;
	break;
	case 2:
			std::system("clear");
			{

	
				lis->~Lista();
				kop->~Kopiec();
				tab->~Tablica();

				if(plik.fail()){
				cout<<"Blad wczytania pliku\n";
				break;
				}
				string nazwaPliku;
				cout<<"Podaj nazwe pliku: ";
				cin>>nazwaPliku;
				
				cout<<"\nZaczynam wczytywac liczby z pliku do struktur \n";
				plik.open(nazwaPliku);	
				plik >> rozmiar;

				while(plik >> liczbaDoTablicy){
				tab->addEndTab(liczbaDoTablicy);
				}
	

				
				plik.clear();
				plik.seekg(0, ios::beg);	
				plik >> rozmiar;

				while(plik >> liczbaDoTablicy){
				lis->addEnd(liczbaDoTablicy);
				}



				
		
				plik.clear();
				plik.seekg(0, ios::beg);
				plik >> rozmiar;

				while(plik >> liczbaDoTablicy){
				kop->push(liczbaDoTablicy);
				}


				cout<<endl<<"Zakonczylem wczytywanie liczb z pliku do wszystkich struktur\n"<<endl;
				plik.close();
		}
			break;
			
		case 3:
		std::system("clear");
		{
		{
		
		
std::system("clear");
					
				
				while(check){
				
					cout << "\n1.Usuwanie z tablicy \n2.Wstawianie do tablicy \n3.Usuwanie z listy \n4.Dodawanie do listy \n5.Usuwanie z drzewa \n6.Dodawanie do drzewa \n7.Wyszukiwanie \n8.Wroc na poczatek" << endl;
					cout<< "Twoj wybor: ";
					cin>>wybor;
					cout<<endl;
					switch(wybor){

						case 1:
							{ 
std::system("clear");
							cout<<"\nPodaj indeks: ";
							cin>>index;
							tab->delIndex(index);
					
						
						}
							break;
						case 2:
							{
std::system("clear");
							cout<<"Podaj wartosc elementu: ";
							cin>>element;
							cout<<"\nPodaj indeks: ";
							cin>>index;
							tab->addIndex(index,element);
						
						}
							break;
						case 3:
							{
std::system("clear");
							cout<<"Podaj wartosc elementu: ";
							cin>>element;
							lis->delElement(element);
							
							}
							break;
						case 4:
							{
std::system("clear");
							cout<<"Podaj wartosc elementu: ";
							cin>>element;
							cout<<"\nPodaj druga liczbe: ";
							cin>>index;
							lis->addElemIndex(element,index);
							
						}
							break;
						case 5:
							{
							 std::system("clear");

							cout<<"Podaj wartosc klucza: ";
							cin>>element;
							kop->pop_element(element);
							
						}
							break;
						case 6:
						{
std::system("clear");
							cout<<"Podaj wartosc elementu: ";
							cin>>element;
							kop->push(element);
							
						}
							break;
						case 7:
						{
std::system("clear");
							cout<<"Podaj element do wyszukania: ";
							cin>>element;
							
							if(tab->szukaj(element)){
								cout<<"\nPodany element znajduje si\EA w tablicy.\n";
							}
							if(lis->searchValue(element)){
								cout<<"\nPodany element znajduje si\EA w liscie.\n";
							}
							if(kop->find(element)){
								cout<<"\nPodany element znajduje si\EA w kopcu.\n";
							}
							
							
						}
							break;
					
						case 8:
std::system("clear");
							check=false;
							break;
						default:
							cout<<"Sprobuj ponownie...\n";
							break;			
					}
					
				}
				check=true;
				}
			break;
		case 4:
			std::system("clear");
			check=false;
			break;
		default:
			break;

}

}
/*		plik.open("liczby.txt");
		plik >> rozmiar;
				
				while(plik >> liczbaDoTablicy){
				kop->push(liczbaDoTablicy);
				}
				
				kop->printKop(1,1);
/*	//czasy
		cout<<"Zaczynam wczytywac liczby z pliku do struktur \n";
				plik.open("liczby.txt");	
				plik >> rozmiar;
					StartCounter();
				while(plik >> liczbaDoTablicy){
				tab->addEndTab(liczbaDoTablicy);
				}
	
				cout << endl << "Czas wczytywania liczb do tablicy: " << GetCounter() <<endl;
				
				plik.clear();
				plik.seekg(0, ios::beg);	
				plik >> rozmiar;
					StartCounter();
				while(plik >> liczbaDoTablicy){
				lis->addFront(liczbaDoTablicy);
				}

				cout << endl << "Czas wczytywania liczb do listy: " << GetCounter()<<endl;

				
		
				plik.clear();
				plik.seekg(0, ios::beg);
				plik >> rozmiar;
					StartCounter();
				while(plik >> liczbaDoTablicy){
				kop->push(liczbaDoTablicy);
				}
				
				cout << endl << "Czas wczytywania liczb do kopca: " << GetCounter()<<endl;
		//dodawanie elementu
				//testy tablica
				StartCounter();
				tab->addFrontTab(12345);
				tab->addFrontTab(12345);
				tab->addFrontTab(12345);
				cout << endl << "Czas dodawania elementu na poczatek tablicy " << (GetCounter()/3)<<endl;
				StartCounter();
				tab->addEndTab(12345);
				tab->addEndTab(12345);
				tab->addEndTab(12345);
				cout << endl << "Czas dodawania elementu na koniec tablicy " << (GetCounter()/3)<<endl;
				StartCounter();
				tab->addRandomeTab(12345);
				tab->addRandomeTab(12345);
				tab->addRandomeTab(12345);
				cout << endl << "Czas dodawania elementu na random tablicy " << (GetCounter()/3)<<endl;
				StartCounter();
				tab->delFrontTab();
				tab->delFrontTab();
				tab->delFrontTab();
				cout << endl << "Czas usuwania pierwszego elementu tablicy " << (GetCounter()/3)<<endl;
				StartCounter();
				tab->delEndTab();
				tab->delEndTab();
				tab->delEndTab();
				cout << endl << "Czas usuwania ostatniego elementu tablicy " << (GetCounter()/3)<<endl;
				StartCounter();
				tab->delRandomeTab();
				tab->delRandomeTab();
				tab->delRandomeTab();
				cout << endl << "Czas usuwania random elementu tablicy " << (GetCounter()/3)<<endl;
				StartCounter();
				if(tab->szukaj(150000)){
						cout << endl << "Czas szukania elementu tablicy1 " << (GetCounter())<<endl;
				}
				StartCounter();
				if(tab->szukaj(100000) && tab->szukaj(100000) && tab->szukaj(100000)){
						cout << endl << "Czas szukania elementu tablicy " << (GetCounter()/3)<<endl;
				}
			
				
				//testy lista
				StartCounter();
				lis->addFront(12345);
				lis->addFront(12345);
				lis->addFront(12345);
				cout << endl << "Czas dodawania elementu na poczatek listy " << (GetCounter()/3)<<endl;
				StartCounter();
				lis->addEnd(12345);
				lis->addEnd(12345);
				lis->addEnd(12345);
				cout << endl << "Czas dodawania elementu na koniec listy " << (GetCounter()/3)<<endl;
				StartCounter();
				lis->addRandome(12345);
				lis->addRandome(12345);
				lis->addRandome(12345);
				cout << endl << "Czas dodawania elementu random listy " << (GetCounter()/3)<<endl;
				StartCounter();
				lis->delFront();
				lis->delFront();
				lis->delFront();
				cout << endl << "Czas usuwania pierwszego elementu listy " << (GetCounter()/3)<<endl;
				StartCounter();
				lis->delEnd();
				lis->delEnd();
				lis->delEnd();
				cout << endl << "Czas usuwania osstatniego elementu listy " << (GetCounter()/3)<<endl;
				StartCounter();
				lis->delRandome();
				lis->delRandome();
				lis->delRandome();
				cout << endl << "Czas usuwania random elementu listy " << (GetCounter()/3)<<endl;
					StartCounter();
				if(lis->searchValue(150000)){
					cout << endl << "Czas szukania listy1 " << (GetCounter())<<endl;
				}
				StartCounter();
				if(lis->searchValue(100000) && lis->searchValue(100000) && lis->searchValue(100000)){
					cout << endl << "Czas szukania w liscie " << (GetCounter()/3)<<endl;
				}
				
				//testy kopiec
				StartCounter();
				kop->push(12345);
				kop->push(12345);
				kop->push(12345);
				cout << endl << "Czas dodawania kopiec " << (GetCounter()/3)<<endl;
				
				StartCounter();
				kop->pop(150000);
				cout << endl << "Czas usuwania kopiec " << (GetCounter())<<endl;
				StartCounter();
				kop->pop(12345);
				kop->pop(12345);
				kop->pop(12345);
				cout << endl << "Czas usuwania kopiec " << (GetCounter()/3)<<endl;
				StartCounter();
				if(kop->find(150000)){
					cout << endl << "Czas szukania kopiec1 " << (GetCounter())<<endl;
				}
					StartCounter();
				if(kop->find(100000) && kop->find(100000) && kop->find(100000)){
					cout << endl << "Czas szukania kopiec " << (GetCounter()/3)<<endl;
				}
				
				
				cout<<"************";
				StartCounter();
				tab->delIndex(150000);
				cout << endl << "Czas usuwania tablica " << (GetCounter())<<endl;
				
				StartCounter();
				lis->delElement(150000);
				cout << endl << "Czas usuwania tablica " << (GetCounter())<<endl;
				
				StartCounter();
				kop->pop(150000);
				cout << endl << "Czas usuwania kopiec " << (GetCounter())<<endl;
				
			*/
				
				

   
}


	lis->~Lista();
	tab->~Tablica();
	kop->~Kopiec();
    return 0;    

}


