/*Abdulsamet KILI�
220707120
Bilgisayar M�hendisli�i (�rg�n ��retim)
Nesneye Y�nelik Programlama - MBM104-A
2022-2023 Bahar D�nemi
Programlama Projesi 1
Dr. ��r. �yesi Ahmet Co�kun�ay*/
#include "Zebra.h"
using namespace std;
Zebra::Zebra(const string &ad, const string &tur, int yas, double uzunluk)
    : Hayvan(ad, tur, yas), uzunluk(uzunluk) {} 
// Zebra yap�c�s�, Hayvan s�n�f�n�n yap�c�s�n� �a��rarak Zebra nesnesini ba�lat�r ve uzunluk de�erini atar.

double Zebra::getUzunluk() const {
    return uzunluk;
}// Zebra'n�n uzunlu�unu d�nd�ren bir i�lev.

void Zebra::setUzunluk(double newUzunluk) {
    uzunluk = newUzunluk;
}// Zebra'n�n uzunlu�unu belirleyen bir i�lev.

void Zebra::setYas(int newYas) {
    Hayvan::setYas(newYas);
}// Zebra'n�n ya��n� belirleyen bir i�lev. Hayvan s�n�f�n�n setYas() i�levini �a��rarak ya� de�erini ayarlar.

