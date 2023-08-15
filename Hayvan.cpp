/*Abdulsamet KILIÇ
220707120
Bilgisayar Mühendisliði (Örgün Öðretim)
Nesneye Yönelik Programlama - MBM104-A
2022-2023 Bahar Dönemi
Programlama Projesi 1
Dr. Öðr. Üyesi Ahmet Coþkunçay*/
#include "Hayvan.h"
using namespace std;
Hayvan::Hayvan(const string &ad, const string &tur, int yas)
    : ad(ad), tur(tur), yas(yas) {}// Hayvan sýnýfýnýn yapýcý iþlevi. Ad, tür ve yaþ deðerlerini parametre olarak alýr.

const string &Hayvan::getAd() const {
    return ad;
}// Hayvanýn adýný döndüren bir iþlev.

const string &Hayvan::getTur() const {
    return tur;
}// Hayvanýn türünü döndüren bir iþlev.

int Hayvan::getYas() const {
    return yas;
}// Hayvanýn yaþýný döndüren bir iþlev.

void Hayvan::setAd(const string &newAd) {
    ad = newAd;
}// Hayvanýn adýný ayarlayan bir iþlev.

void Hayvan::setTur(const string &newTur) {
    tur = newTur;
}// Hayvanýn türünü ayarlayan bir iþlev.

void Hayvan::setYas(int newYas) {
    yas = newYas;
}// Hayvanýn yaþýný ayarlayan bir iþlev.

