/*Abdulsamet KILI�
220707120
Bilgisayar M�hendisli�i (�rg�n ��retim)
Nesneye Y�nelik Programlama - MBM104-A
2022-2023 Bahar D�nemi
Programlama Projesi 1
Dr. ��r. �yesi Ahmet Co�kun�ay*/
#ifndef KARTAL_H
#define KARTAL_H

#include "Hayvan.h"
#include <string>
using namespace std;

class Kartal : public Hayvan {
private:
    int hiz;
public:
    Kartal(const sstring &ad, const string &tur, int yas, int hiz);// Kartal s�n�f�n�n yap�c�s�, ad, t�r, ya� ve h�z parametrelerini alarak Kartal nesnesini ba�lat�r.

    int getHiz() const;// Kartal'�n h�z�n� d�nd�ren bir i�lev.
    void setHiz(int newHiz);// Kartal'�n h�z�n� ayarlayan bir i�lev.
    void setYas(int newYas); // Kartal'�n ya��n� ayarlayan bir i�lev.
};

#endif //KARTAL_H

