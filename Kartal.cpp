#include "Kartal.h"
using namespace std;
Kartal::Kartal(const string &ad, const string &tur, int yas, int hiz)
    : Hayvan(ad, tur, yas), hiz(hiz) {}  // kanatAcikligi yerine hiz değişkenini kullandım
// Kartal yapıcısı, Hayvan sınıfının yapıcısını çağırarak Kartal nesnesini başlatır ve hız değerini atar.

int Kartal::getHiz() const {
    return hiz;
}// Kartal'ın hızını döndüren bir işlev.

void Kartal::setHiz(int newHiz) {
    hiz = newHiz;
}// Kartal'ın hızını belirleyen bir işlev.

void Kartal::setYas(int newYas) {
    Hayvan::setYas(newYas);
}// Kartal'ın yaşını belirleyen bir işlev. Hayvan sınıfının setYas() işlevini çağırarak yaş değerini ayarlar.

