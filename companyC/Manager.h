#include "Angajat.h"
#pragma once
#include <iostream>
using namespace std;
class Manager : public Angajat {
public:
    Manager(int IDRecevied) : Angajat(IDRecevied) {}
    void sound() {
        cout << "Woof" << endl;
    }
};
