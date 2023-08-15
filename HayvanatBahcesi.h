/*Abdulsamet KILI�
220707120
Bilgisayar M�hendisli�i (�rg�n ��retim)
Nesneye Y�nelik Programlama - MBM104-A
2022-2023 Bahar D�nemi
Programlama Projesi 1
Dr. ��r. �yesi Ahmet Co�kun�ay*/
#ifndef HAYVANATBAHCESI_H
#define HAYVANATBAHCESI_H

#include "Hayvan.h"
#include <vector>
using namespace std;
class HayvanatBahcesi {
public:
    vector<Hayvan*> hayvanlar;// Hayvanlar�n tutuldu�u bir hayvanlar vekt�r�.


    void hayvanEkle(Hayvan* hayvan);// Hayvan� hayvanlar vekt�r�ne ekleyen bir i�lev.
    void hayvanlariGoster() const;// Hayvanlar� ekrana g�steren bir i�lev.
    void hayvanBesle(const string &hayvanAdi);// Belirli bir hayvan� besleyen bir i�lev.
    void hayvanYasGuncelle(const string &hayvanAdi, int yas); // Belirli bir hayvan�n ya��n� g�ncelleyen bir i�lev.
};

#endif //HAYVANATBAHCESI_H

