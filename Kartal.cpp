/*Abdulsamet KILI�
220707120
Bilgisayar M�hendisli�i (�rg�n ��retim)
Nesneye Y�nelik Programlama - MBM104-A
2022-2023 Bahar D�nemi
Programlama Projesi 1
Dr. ��r. �yesi Ahmet Co�kun�ay*/
#include "Kartal.h"
using namespace std;
Kartal::Kartal(const string &ad, const string &tur, int yas, int hiz)
    : Hayvan(ad, tur, yas), hiz(hiz) {}  // kanatAcikligi yerine hiz de�i�kenini kulland�m
// Kartal yap�c�s�, Hayvan s�n�f�n�n yap�c�s�n� �a��rarak Kartal nesnesini ba�lat�r ve h�z de�erini atar.

int Kartal::getHiz() const {
    return hiz;
}// Kartal'�n h�z�n� d�nd�ren bir i�lev.

void Kartal::setHiz(int newHiz) {
    hiz = newHiz;
}// Kartal'�n h�z�n� belirleyen bir i�lev.

void Kartal::setYas(int newYas) {
    Hayvan::setYas(newYas);
}// Kartal'�n ya��n� belirleyen bir i�lev. Hayvan s�n�f�n�n setYas() i�levini �a��rarak ya� de�erini ayarlar.

