// companyC.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "service.h"
#include "Muncitor.h"
#include "CEO.h"
#include "Manager.h"
using namespace std;
int main()
{
   
    Angajat* angajat1 = new Manager(1);
    Angajat* angajat2 = new Muncitor(2);
    
    std::cout <<"Angajatul 2 are ID-ul: " <<angajat1->ID<<endl;
    std::cout <<"Angajatul 1 are ID-ul: " <<angajat2->ID << endl;
    
    vector<Angajat*> list_angajati;
    list_angajati.push_back(angajat1);
    list_angajati.push_back(angajat2);


    Meniu<Angajat> *meniuAngajat = new Meniu<Angajat>(1, list_angajati);
    Meniu<Muncitor> *meniuMuncitor = new Meniu<Muncitor>(2, list_angajati);
  
    meniuAngajat->gestioneaza_angajati();
    meniuMuncitor->gestioneaza_angajati();

    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
