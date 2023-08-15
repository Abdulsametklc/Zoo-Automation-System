/*Abdulsamet KILIÇ
220707120
Bilgisayar Mühendisliði (Örgün Öðretim)
Nesneye Yönelik Programlama - MBM104-A
2022-2023 Bahar Dönemi
Programlama Projesi 1
Dr. Öðr. Üyesi Ahmet Coþkunçay*/
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
    Hayvan(const string &ad, const string &tur, int yas);// Hayvan sýnýfýnýn yapýcý iþlevi. Ad, tür ve yaþ deðerlerini parametre olarak alýr.
    virtual ~Hayvan() = default;// Sanal yýkýcý iþlev, türetilmiþ sýnýflarýn düzgün bir þekilde bellekten serbest býrakýlmasýný saðlar.

    const string &getAd() const; // Hayvanýn adýný döndüren bir iþlev.
    const string &getTur() const; // Hayvanýn türünü döndüren bir iþlev.
    int getYas() const;// Hayvanýn yaþýný döndüren bir iþlev.

    void setAd(const string &ad);// Hayvanýn adýný ayarlayan bir iþlev.
    void setTur(const string &tur);// Hayvanýn türünü ayarlayan bir iþlev.
    void setYas(int yas);// Hayvanýn yaþýný ayarlayan bir iþlev.
};

#endif //HAYVAN_H

