/*Abdulsamet KILIÇ
220707120
Bilgisayar Mühendisliði (Örgün Öðretim)
Nesneye Yönelik Programlama - MBM104-A
2022-2023 Bahar Dönemi
Programlama Projesi 1
Dr. Öðr. Üyesi Ahmet Coþkunçay*/
#ifndef ASLAN_H
#define ASLAN_H

#include "Hayvan.h"
#include <string>
using namespace std;
class Aslan : public Hayvan {
private:
    string renk;
public:
    Aslan(const string &ad, const string &tur, int yas, const string &renk);// Aslan sýnýfýnýn yapýcý iþlevi. Ad, tür, yaþ ve renk deðerlerini parametre olarak alýr.

    const string &getRenk() const;// Aslanýn renk deðerini döndüren bir iþlev.
    void setRenk(const string &newRenk);// Aslanýn renk deðerini ayarlayan bir iþlev.
    void setYas(int newYas); // Aslanýn yaþ deðerini ayarlayan bir iþlev. Hayvan sýnýfýndan gelen setYas iþlevini ezme (override) iþlemi yapar.
};

#endif //ASLAN_H

