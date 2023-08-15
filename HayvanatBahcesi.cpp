#include "HayvanatBahcesi.h"
#include "Aslan.h"
#include "Zebra.h"
#include "Kartal.h"
#include <iostream>
using namespace std;
void HayvanatBahcesi::hayvanEkle(Hayvan* hayvan) {// Hayvanı hayvanlar vektörüne ekleyen bir işlev.
    hayvanlar.push_back(hayvan);
}

void HayvanatBahcesi::hayvanlariGoster() const { // Hayvanları ekrana gösteren bir işlev.
    for (const auto &hayvan : hayvanlar) {
        cout << "\nAd: " << hayvan->getAd() << "\nTür: " << hayvan->getTur() << "\nYaş: " << hayvan->getYas() << endl;
    }
}

void HayvanatBahcesi::hayvanBesle(const string &hayvanAdi) { // Belirli bir hayvanı besleyen bir işlev.
    for (const auto &hayvan : hayvanlar) {
        if (hayvan->getAd() == hayvanAdi) {
            if(dynamic_cast<Aslan*>(hayvan)) {
                cout << hayvanAdi << " aslanı" << " etle beslendi." << endl;
            }
            else if(dynamic_cast<Kartal*>(hayvan)) {
                cout << hayvanAdi << " kartalı" << " etle beslendi." << endl;
            }
            else if(dynamic_cast<Zebra*>(hayvan)) {
                cout << hayvanAdi << " zebra" << " otla beslendi." << endl;
            }
        }
    }
}

void HayvanatBahcesi::hayvanYasGuncelle(const string &hayvanAdi, int yas) {// Belirli bir hayvanın yaşını güncelleyen bir işlev.
    for (auto &hayvan : hayvanlar) {
        if (hayvan->getAd() == hayvanAdi) {
            hayvan->setYas(yas);
            cout << hayvanAdi << " adlı hayvanın yaş güncellendi: " << yas << endl;
        }
    }
}

