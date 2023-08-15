/*Abdulsamet KILI�
220707120
Bilgisayar M�hendisli�i (�rg�n ��retim)
Nesneye Y�nelik Programlama - MBM104-A
2022-2023 Bahar D�nemi
Programlama Projesi 1
Dr. ��r. �yesi Ahmet Co�kun�ay*/
#ifndef HAYVAN_H
#define HAYVAN_H

#include <string>
using namespace std;
class Hayvan {
protected:
    string ad;
    string tur;
    int yas;
public:
    Hayvan(const string &ad, const string &tur, int yas);// Hayvan s�n�f�n�n yap�c� i�levi. Ad, t�r ve ya� de�erlerini parametre olarak al�r.
    virtual ~Hayvan() = default;// Sanal y�k�c� i�lev, t�retilmi� s�n�flar�n d�zg�n bir �ekilde bellekten serbest b�rak�lmas�n� sa�lar.

    const string &getAd() const; // Hayvan�n ad�n� d�nd�ren bir i�lev.
    const string &getTur() const; // Hayvan�n t�r�n� d�nd�ren bir i�lev.
    int getYas() const;// Hayvan�n ya��n� d�nd�ren bir i�lev.

    void setAd(const string &ad);// Hayvan�n ad�n� ayarlayan bir i�lev.
    void setTur(const string &tur);// Hayvan�n t�r�n� ayarlayan bir i�lev.
    void setYas(int yas);// Hayvan�n ya��n� ayarlayan bir i�lev.
};

#endif //HAYVAN_H

