/*Abdulsamet KILIÇ
220707120
Bilgisayar Mühendisliði (Örgün Öðretim)
Nesneye Yönelik Programlama - MBM104-A
2022-2023 Bahar Dönemi
Programlama Projesi 1
Dr. Öðr. Üyesi Ahmet Coþkunçay*/
#include "HayvanatBahcesi.h"
#include "Aslan.h"
#include "Zebra.h"
#include "Kartal.h"
#include <iostream>
using namespace std;
void HayvanatBahcesi::hayvanEkle(Hayvan* hayvan) {// Hayvaný hayvanlar vektörüne ekleyen bir iþlev.
    hayvanlar.push_back(hayvan);
}

void HayvanatBahcesi::hayvanlariGoster() const { // Hayvanlarý ekrana gösteren bir iþlev.
    for (const auto &hayvan : hayvanlar) {
        cout << "\nAd: " << hayvan->getAd() << "\nTür: " << hayvan->getTur() << "\nYaþ: " << hayvan->getYas() << endl;
    }
}

void HayvanatBahcesi::hayvanBesle(const string &hayvanAdi) { // Belirli bir hayvaný besleyen bir iþlev.
    for (const auto &hayvan : hayvanlar) {
        if (hayvan->getAd() == hayvanAdi) {
            if(dynamic_cast<Aslan*>(hayvan)) {
                cout << hayvanAdi << " aslaný" << " etle beslendi." << endl;
            }
            else if(dynamic_cast<Kartal*>(hayvan)) {
                cout << hayvanAdi << " kartalý" << " etle beslendi." << endl;
            }
            else if(dynamic_cast<Zebra*>(hayvan)) {
                cout << hayvanAdi << " zebra" << " otla beslendi." << endl;
            }
        }
    }
}

void HayvanatBahcesi::hayvanYasGuncelle(const string &hayvanAdi, int yas) {// Belirli bir hayvanýn yaþýný güncelleyen bir iþlev.
    for (auto &hayvan : hayvanlar) {
        if (hayvan->getAd() == hayvanAdi) {
            hayvan->setYas(yas);
            cout << hayvanAdi << " adlý hayvanýn yaþ güncellendi: " << yas << endl;
        }
    }
}

