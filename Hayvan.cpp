/*Abdulsamet KILI�
220707120
Bilgisayar M�hendisli�i (�rg�n ��retim)
Nesneye Y�nelik Programlama - MBM104-A
2022-2023 Bahar D�nemi
Programlama Projesi 1
Dr. ��r. �yesi Ahmet Co�kun�ay*/
#include "Hayvan.h"
using namespace std;
Hayvan::Hayvan(const string &ad, const string &tur, int yas)
    : ad(ad), tur(tur), yas(yas) {}// Hayvan s�n�f�n�n yap�c� i�levi. Ad, t�r ve ya� de�erlerini parametre olarak al�r.

const string &Hayvan::getAd() const {
    return ad;
}// Hayvan�n ad�n� d�nd�ren bir i�lev.

const string &Hayvan::getTur() const {
    return tur;
}// Hayvan�n t�r�n� d�nd�ren bir i�lev.

int Hayvan::getYas() const {
    return yas;
}// Hayvan�n ya��n� d�nd�ren bir i�lev.

void Hayvan::setAd(const string &newAd) {
    ad = newAd;
}// Hayvan�n ad�n� ayarlayan bir i�lev.

void Hayvan::setTur(const string &newTur) {
    tur = newTur;
}// Hayvan�n t�r�n� ayarlayan bir i�lev.

void Hayvan::setYas(int newYas) {
    yas = newYas;
}// Hayvan�n ya��n� ayarlayan bir i�lev.

