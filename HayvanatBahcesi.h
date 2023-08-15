/*Abdulsamet KILIÇ
220707120
Bilgisayar Mühendisliði (Örgün Öðretim)
Nesneye Yönelik Programlama - MBM104-A
2022-2023 Bahar Dönemi
Programlama Projesi 1
Dr. Öðr. Üyesi Ahmet Coþkunçay*/
#ifndef HAYVANATBAHCESI_H
#define HAYVANATBAHCESI_H

#include "Hayvan.h"
#include <vector>
using namespace std;
class HayvanatBahcesi {
public:
    vector<Hayvan*> hayvanlar;// Hayvanlarýn tutulduðu bir hayvanlar vektörü.


    void hayvanEkle(Hayvan* hayvan);// Hayvaný hayvanlar vektörüne ekleyen bir iþlev.
    void hayvanlariGoster() const;// Hayvanlarý ekrana gösteren bir iþlev.
    void hayvanBesle(const string &hayvanAdi);// Belirli bir hayvaný besleyen bir iþlev.
    void hayvanYasGuncelle(const string &hayvanAdi, int yas); // Belirli bir hayvanýn yaþýný güncelleyen bir iþlev.
};

#endif //HAYVANATBAHCESI_H

