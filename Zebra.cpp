/*Abdulsamet KILIÇ
220707120
Bilgisayar Mühendisliði (Örgün Öðretim)
Nesneye Yönelik Programlama - MBM104-A
2022-2023 Bahar Dönemi
Programlama Projesi 1
Dr. Öðr. Üyesi Ahmet Coþkunçay*/
#include "Zebra.h"
using namespace std;
Zebra::Zebra(const string &ad, const string &tur, int yas, double uzunluk)
    : Hayvan(ad, tur, yas), uzunluk(uzunluk) {} 
// Zebra yapýcýsý, Hayvan sýnýfýnýn yapýcýsýný çaðýrarak Zebra nesnesini baþlatýr ve uzunluk deðerini atar.

double Zebra::getUzunluk() const {
    return uzunluk;
}// Zebra'nýn uzunluðunu döndüren bir iþlev.

void Zebra::setUzunluk(double newUzunluk) {
    uzunluk = newUzunluk;
}// Zebra'nýn uzunluðunu belirleyen bir iþlev.

void Zebra::setYas(int newYas) {
    Hayvan::setYas(newYas);
}// Zebra'nýn yaþýný belirleyen bir iþlev. Hayvan sýnýfýnýn setYas() iþlevini çaðýrarak yaþ deðerini ayarlar.

