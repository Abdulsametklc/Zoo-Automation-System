#include "Zebra.h"
using namespace std;
Zebra::Zebra(const string &ad, const string &tur, int yas, double uzunluk)
    : Hayvan(ad, tur, yas), uzunluk(uzunluk) {} 
// Zebra yapıcısı, Hayvan sınıfının yapıcısını çağırarak Zebra nesnesini başlatır ve uzunluk değerini atar.

double Zebra::getUzunluk() const {
    return uzunluk;
}// Zebra'nın uzunluğunu döndüren bir işlev.

void Zebra::setUzunluk(double newUzunluk) {
    uzunluk = newUzunluk;
}// Zebra'nın uzunluğunu belirleyen bir işlev.

void Zebra::setYas(int newYas) {
    Hayvan::setYas(newYas);
}// Zebra'nın yaşını belirleyen bir işlev. Hayvan sınıfının setYas() işlevini çağırarak yaş değerini ayarlar.

