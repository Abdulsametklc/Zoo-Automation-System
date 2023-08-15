/*Abdulsamet KILIÇ
220707120
Bilgisayar Mühendisliði (Örgün Öðretim)
Nesneye Yönelik Programlama - MBM104-A
2022-2023 Bahar Dönemi
Programlama Projesi 1
Dr. Öðr. Üyesi Ahmet Coþkunçay*/
#ifndef ZEBRA_H
#define ZEBRA_H

#include "Hayvan.h"
using namespace std;

class Zebra: public Hayvan {
private:
    double uzunluk;
public:
    Zebra(const string &ad, const std::string &tur, int yas, double uzunluk);// Zebra sýnýfýnýn yapýcýsý
    ~Zebra() override = default;

    double getUzunluk() const;// uzunluk (length) deðerini döndüren iþlev
    void setUzunluk(double uzunluk);// uzunluk (length) deðerini belirleyen iþlev
    void setYas(int newYas); // yeni yaþ deðerini belirleyen iþlev


#endif //ZEBRA_H

