#include "Angajat.h"
#pragma once
class Muncitor : virtual public Angajat {
public:
    Muncitor() = default;
    Muncitor(int IDRecevied) : Angajat(IDRecevied) {}
    void sound() {
        cout << "Woof" << endl;
    }
};

