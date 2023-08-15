#include "Hayvan.h"
using namespace std;
Hayvan::Hayvan(const string &ad, const string &tur, int yas)
    : ad(ad), tur(tur), yas(yas) {}// Hayvan sınıfının yapıcı işlevi. Ad, tür ve yaş değerlerini parametre olarak alır.

const string &Hayvan::getAd() const {
    return ad;
}// Hayvanın adını döndüren bir işlev.

const string &Hayvan::getTur() const {
    return tur;
}// Hayvanın türünü döndüren bir işlev.

int Hayvan::getYas() const {
    return yas;
}// Hayvanın yaşını döndüren bir işlev.

void Hayvan::setAd(const string &newAd) {
    ad = newAd;
}// Hayvanın adını ayarlayan bir işlev.

void Hayvan::setTur(const string &newTur) {
    tur = newTur;
}// Hayvanın türünü ayarlayan bir işlev.

void Hayvan::setYas(int newYas) {
    yas = newYas;
}// Hayvanın yaşını ayarlayan bir işlev.

