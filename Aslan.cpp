/*Abdulsamet KILI�
220707120
Bilgisayar M�hendisli�i (�rg�n ��retim)
Nesneye Y�nelik Programlama - MBM104-A
2022-2023 Bahar D�nemi
Programlama Projesi 1
Dr. ��r. �yesi Ahmet Co�kun�ay*/
#include "Aslan.h"
using namespace std;

Aslan::Aslan(const string &ad, const string &tur, int yas, const string &renk)
    : Hayvan(ad, tur, yas), renk(renk) {}// Aslan s�n�f�n�n yap�c� i�levi. Hayvan s�n�f�n�n yap�c� i�levini �a��r�r ve renk de�i�kenini ayarlar.

const string &Aslan::getRenk() const {
    return renk;
}// Aslan�n renk de�erini d�nd�ren bir i�lev.

void Aslan::setRenk(const string &newRenk) {
    renk = newRenk;
}// Aslan�n renk de�erini ayarlayan bir i�lev.

void Aslan::setYas(int newYas) {
    Hayvan::setYas(newYas); 
}// Aslan�n ya� de�erini ayarlayan bir i�lev. Hayvan s�n�f�n�n setYas i�levini �a��r�r.

