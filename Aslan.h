/*Abdulsamet KILI�
220707120
Bilgisayar M�hendisli�i (�rg�n ��retim)
Nesneye Y�nelik Programlama - MBM104-A
2022-2023 Bahar D�nemi
Programlama Projesi 1
Dr. ��r. �yesi Ahmet Co�kun�ay*/
#ifndef ASLAN_H
#define ASLAN_H

#include "Hayvan.h"
#include <string>
using namespace std;
class Aslan : public Hayvan {
private:
    string renk;
public:
    Aslan(const string &ad, const string &tur, int yas, const string &renk);// Aslan s�n�f�n�n yap�c� i�levi. Ad, t�r, ya� ve renk de�erlerini parametre olarak al�r.

    const string &getRenk() const;// Aslan�n renk de�erini d�nd�ren bir i�lev.
    void setRenk(const string &newRenk);// Aslan�n renk de�erini ayarlayan bir i�lev.
    void setYas(int newYas); // Aslan�n ya� de�erini ayarlayan bir i�lev. Hayvan s�n�f�ndan gelen setYas i�levini ezme (override) i�lemi yapar.
};

#endif //ASLAN_H

