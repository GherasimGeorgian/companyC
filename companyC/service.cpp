#include "service.h"
#include "Angajat.h"
#include "Manager.h"
#include "Muncitor.h"
#include "CEO.h"
#include <iostream>
using namespace std;


Meniu<CEO>::Meniu(int index_angajat_param, vector<Angajat*> list_angajati)
{
	

	index_angajat = index_angajat_param;
	angajati = list_angajati;
	std::cout << "Constructor call ceo " << "param receieved: "<< index_angajat<<"\n";
	
}


Meniu<Angajat>::Meniu(int index_angajat_param, vector<Angajat*> list_angajati)
{ 
	index_angajat = index_angajat_param;
	angajati = list_angajati;
	std::cout << "Constructor call angajat " << "param receieved: " << index_angajat << "\n";
}


Meniu<Muncitor>::Meniu(int index_angajat_param, vector<Angajat*> list_angajati)
{
	index_angajat = index_angajat_param;
	angajati = list_angajati;
	std::cout << "Constructor call muncitor " << "param receieved: " << index_angajat << "\n";
}


void Meniu<Angajat>::afisare_angajati()
{
	std::cout << "afisare angajat call\n";
}

void Meniu<Manager>::afisare_angajati()
{
	std::cout << "afisare angajat call\n";
}

void Meniu<CEO>::afisare_angajati()
{
	std::cout << "afisare angajat call\n";
}
void Meniu<Angajat>::gestioneaza_angajati()
{
	std::cout << "Angajat call\n";
}


void Meniu<Manager>::gestioneaza_angajati()
{
	std::cout << "Manager call\n";
}


void Meniu<Muncitor>::gestioneaza_angajati()
{
	std::cout << "Muncitor call\n";
}


void Meniu<CEO>::gestioneaza_angajati()
{
	std::cout << "CEO call\n";
}



// define overloaded += (plus) operator
//CEO Meniu<CEO>::operator+=(const CEO& c) const
//{
	//complx result;
	//result.real = (this->real + c.real);
	//result.imag = (this->imag + c.imag);
	//return result;
	
//}