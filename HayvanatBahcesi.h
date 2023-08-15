#ifndef HAYVANATBAHCESI_H
#define HAYVANATBAHCESI_H

#include "Hayvan.h"
#include <vector>
using namespace std;
class HayvanatBahcesi {
public:
    vector<Hayvan*> hayvanlar;// Hayvanların tutulduğu bir hayvanlar vektörü.


    void hayvanEkle(Hayvan* hayvan);// Hayvanı hayvanlar vektörüne ekleyen bir işlev.
    void hayvanlariGoster() const;// Hayvanları ekrana gösteren bir işlev.
    void hayvanBesle(const string &hayvanAdi);// Belirli bir hayvanı besleyen bir işlev.
    void hayvanYasGuncelle(const string &hayvanAdi, int yas); // Belirli bir hayvanın yaşını güncelleyen bir işlev.
};

#endif //HAYVANATBAHCESI_H

