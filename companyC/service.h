#pragma once
#include <string>
#include <vector>
#include "Angajat.h"
using namespace std;



template<class T>
class Meniu 
{
protected:
	int index_angajat = 0;
	vector<Angajat*> angajati;
public:
	T operator+=(const T&) const;       // operator+=() for entity T
	
	Meniu(int index_angajat_param, vector<Angajat*> list_angajati);

	void gestioneaza_angajati();

	void adauga_angajat();

	void afisare_angajati();
};




