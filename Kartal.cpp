/*Abdulsamet KILIÇ
220707120
Bilgisayar Mühendisliði (Örgün Öðretim)
Nesneye Yönelik Programlama - MBM104-A
2022-2023 Bahar Dönemi
Programlama Projesi 1
Dr. Öðr. Üyesi Ahmet Coþkunçay*/
#include "Kartal.h"
using namespace std;
Kartal::Kartal(const string &ad, const string &tur, int yas, int hiz)
    : Hayvan(ad, tur, yas), hiz(hiz) {}  // kanatAcikligi yerine hiz deðiþkenini kullandým
// Kartal yapýcýsý, Hayvan sýnýfýnýn yapýcýsýný çaðýrarak Kartal nesnesini baþlatýr ve hýz deðerini atar.

int Kartal::getHiz() const {
    return hiz;
}// Kartal'ýn hýzýný döndüren bir iþlev.

void Kartal::setHiz(int newHiz) {
    hiz = newHiz;
}// Kartal'ýn hýzýný belirleyen bir iþlev.

void Kartal::setYas(int newYas) {
    Hayvan::setYas(newYas);
}// Kartal'ýn yaþýný belirleyen bir iþlev. Hayvan sýnýfýnýn setYas() iþlevini çaðýrarak yaþ deðerini ayarlar.

