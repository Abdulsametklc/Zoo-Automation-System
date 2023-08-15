#include "Aslan.h"
using namespace std;

Aslan::Aslan(const string &ad, const string &tur, int yas, const string &renk)
    : Hayvan(ad, tur, yas), renk(renk) {}// Aslan sınıfının yapıcı işlevi. Hayvan sınıfının yapıcı işlevini çağırır ve renk değişkenini ayarlar.

const string &Aslan::getRenk() const {
    return renk;
}// Aslanın renk değerini döndüren bir işlev.

void Aslan::setRenk(const string &newRenk) {
    renk = newRenk;
}// Aslanın renk değerini ayarlayan bir işlev.

void Aslan::setYas(int newYas) {
    Hayvan::setYas(newYas); 
}// Aslanın yaş değerini ayarlayan bir işlev. Hayvan sınıfının setYas işlevini çağırır.

