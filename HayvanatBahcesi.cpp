/*Abdulsamet KILI�
220707120
Bilgisayar M�hendisli�i (�rg�n ��retim)
Nesneye Y�nelik Programlama - MBM104-A
2022-2023 Bahar D�nemi
Programlama Projesi 1
Dr. ��r. �yesi Ahmet Co�kun�ay*/
#include "HayvanatBahcesi.h"
#include "Aslan.h"
#include "Zebra.h"
#include "Kartal.h"
#include <iostream>
using namespace std;
void HayvanatBahcesi::hayvanEkle(Hayvan* hayvan) {// Hayvan� hayvanlar vekt�r�ne ekleyen bir i�lev.
    hayvanlar.push_back(hayvan);
}

void HayvanatBahcesi::hayvanlariGoster() const { // Hayvanlar� ekrana g�steren bir i�lev.
    for (const auto &hayvan : hayvanlar) {
        cout << "\nAd: " << hayvan->getAd() << "\nT�r: " << hayvan->getTur() << "\nYa�: " << hayvan->getYas() << endl;
    }
}

void HayvanatBahcesi::hayvanBesle(const string &hayvanAdi) { // Belirli bir hayvan� besleyen bir i�lev.
    for (const auto &hayvan : hayvanlar) {
        if (hayvan->getAd() == hayvanAdi) {
            if(dynamic_cast<Aslan*>(hayvan)) {
                cout << hayvanAdi << " aslan�" << " etle beslendi." << endl;
            }
            else if(dynamic_cast<Kartal*>(hayvan)) {
                cout << hayvanAdi << " kartal�" << " etle beslendi." << endl;
            }
            else if(dynamic_cast<Zebra*>(hayvan)) {
                cout << hayvanAdi << " zebra" << " otla beslendi." << endl;
            }
        }
    }
}

void HayvanatBahcesi::hayvanYasGuncelle(const string &hayvanAdi, int yas) {// Belirli bir hayvan�n ya��n� g�ncelleyen bir i�lev.
    for (auto &hayvan : hayvanlar) {
        if (hayvan->getAd() == hayvanAdi) {
            hayvan->setYas(yas);
            cout << hayvanAdi << " adl� hayvan�n ya� g�ncellendi: " << yas << endl;
        }
    }
}

