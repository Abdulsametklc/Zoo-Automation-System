/*Abdulsamet KILIÇ
220707120
Bilgisayar Mühendisliði (Örgün Öðretim)
Nesneye Yönelik Programlama - MBM104-A
2022-2023 Bahar Dönemi
Programlama Projesi 1
Dr. Öðr. Üyesi Ahmet Coþkunçay*/
#ifndef KARTAL_H
#define KARTAL_H

#include "Hayvan.h"
#include <string>
using namespace std;

class Kartal : public Hayvan {
private:
    int hiz;
public:
    Kartal(const sstring &ad, const string &tur, int yas, int hiz);// Kartal sýnýfýnýn yapýcýsý, ad, tür, yaþ ve hýz parametrelerini alarak Kartal nesnesini baþlatýr.

    int getHiz() const;// Kartal'ýn hýzýný döndüren bir iþlev.
    void setHiz(int newHiz);// Kartal'ýn hýzýný ayarlayan bir iþlev.
    void setYas(int newYas); // Kartal'ýn yaþýný ayarlayan bir iþlev.
};

#endif //KARTAL_H

