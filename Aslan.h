#ifndef ASLAN_H
#define ASLAN_H

#include "Hayvan.h"
#include <string>
using namespace std;
class Aslan : public Hayvan {
private:
    string renk;
public:
    Aslan(const string &ad, const string &tur, int yas, const string &renk);// Aslan sınıfının yapıcı işlevi. Ad, tür, yaş ve renk değerlerini parametre olarak alır.

    const string &getRenk() const;// Aslanın renk değerini döndüren bir işlev.
    void setRenk(const string &newRenk);// Aslanın renk değerini ayarlayan bir işlev.
    void setYas(int newYas); // Aslanın yaş değerini ayarlayan bir işlev. Hayvan sınıfından gelen setYas işlevini ezme (override) işlemi yapar.
};

#endif //ASLAN_H

