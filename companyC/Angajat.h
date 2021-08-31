#pragma once
#include <string>
#include <vector>

#include <iostream>
using namespace std;

class Angajat {
public:
	//1,"Mihai1","muncitor","constructii",2000
	int ID;

	string nume, functie, departament;

	int salariu;

	vector<Angajat> angajati_subordonati;
	//2,"Mihai2","manager","constructii",2000
	//3,"Mihai3","muncitor","constructii",2000
	//4,"Mihai4","manager","constructii",2000
	//5,"Mihai5","muncitor","constructii",2000

	//1;2
	//1;3
	//1;4
	//1;5
	Angajat(int IDReceived) : ID(IDReceived){};
	
	//Pure Virtual Function
	virtual void sound() = 0;

	//Normal member Function
	void sleeping() {
		std::cout << "Sleeping";
	}
};

