/*Abdulsamet KILIÇ
220707120
Bilgisayar Mühendisliði (Örgün Öðretim)
Nesneye Yönelik Programlama - MBM104-A
2022-2023 Bahar Dönemi
Programlama Projesi 1
Dr. Öðr. Üyesi Ahmet Coþkunçay*/
#include "Aslan.h"
using namespace std;

Aslan::Aslan(const string &ad, const string &tur, int yas, const string &renk)
    : Hayvan(ad, tur, yas), renk(renk) {}// Aslan sýnýfýnýn yapýcý iþlevi. Hayvan sýnýfýnýn yapýcý iþlevini çaðýrýr ve renk deðiþkenini ayarlar.

const string &Aslan::getRenk() const {
    return renk;
}// Aslanýn renk deðerini döndüren bir iþlev.

void Aslan::setRenk(const string &newRenk) {
    renk = newRenk;
}// Aslanýn renk deðerini ayarlayan bir iþlev.

void Aslan::setYas(int newYas) {
    Hayvan::setYas(newYas); 
}// Aslanýn yaþ deðerini ayarlayan bir iþlev. Hayvan sýnýfýnýn setYas iþlevini çaðýrýr.

