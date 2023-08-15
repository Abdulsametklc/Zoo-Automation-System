#ifndef KARTAL_H
#define KARTAL_H

#include "Hayvan.h"
#include <string>
using namespace std;

class Kartal : public Hayvan {
private:
    int hiz;
public:
    Kartal(const sstring &ad, const string &tur, int yas, int hiz);// Kartal sınıfının yapıcısı, ad, tür, yaş ve hız parametrelerini alarak Kartal nesnesini başlatır.

    int getHiz() const;// Kartal'ın hızını döndüren bir işlev.
    void setHiz(int newHiz);// Kartal'ın hızını ayarlayan bir işlev.
    void setYas(int newYas); // Kartal'ın yaşını ayarlayan bir işlev.
};

#endif //KARTAL_H

