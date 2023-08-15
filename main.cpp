/*Abdulsamet 
KILI�
220707120
Bilgisayar M�hendisli�i (�rg�n ��retim)
Nesneye Y�nelik Programlama - MBM104-A
2022-2023 Bahar D�nemi
Programlama Projesi 1
Dr. ��r. �yesi Ahmet Co�kun�ay*/

#include <clocale>
#include <iostream>
#include "Hayvan.h" //Hayvan s�n�f�n�n ba�l�k dosyas�
#include "Aslan.h" //Aslan s�n�f�n�n ba�l�k dosyas�
#include "Zebra.h" //Zebra s�n�f�n�n ba�l�k dosyas�
#include "Kartal.h" //Kartal s�n�f�n�n ba�l�k dosyas�
#include "HayvanatBahcesi.h" //Hayvanat Bah�esi s�n�f�n�n ba�l�k dosyas�
#include "Hayvan.cpp" //Hayvan s�n�f�n�n kaynak dosyas�
#include "Aslan.cpp" //Aslan s�n�f�n�n kaynak dosyas�
#include "Zebra.cpp" //Zebra s�n�f�n�n kaynak dosyas�
#include "Kartal.cpp" //Kartal s�n�f�n�n kaynak dosyas�
#include "HayvanatBahcesi.cpp" //Hayvanat Bah�esi s�n�f�n�n kaynak dosyas�

using namespace std;

int main() {
    setlocale(LC_ALL, "Turkish"); //fonskiyonu kullanarak T�rk�e dil ayar�n� yapar.
    
    Hayvan *aslan1 = new Aslan("Simba", "Aslan", 5, "Kahverengi"); // Hayvan(aslan, zebra ve kartal) s�n�flar�ndan �rnek nesneler olu�turuyor.
    Hayvan *aslan2 = new Aslan("Mufasa", "Aslan", 7, "Sar�");
    Hayvan *aslan3 = new Aslan("Zula", "Aslan",10,"Siyah");
    Hayvan *zebra1 = new Zebra("Marty", "Zebra", 3, 170);
    Hayvan *zebra2 = new Zebra("Alex", "Zebra", 4, 175);
    Hayvan *zebra3 = new Zebra("Sadio", "Zebra", 5, 180);
    Hayvan *kartal1 = new Kartal("Eagle", "Kartal", 2, 40);
    Hayvan *kartal2 = new Kartal("Hawk", "Kartal", 3, 45);
    Hayvan *kartal3 = new Kartal("George", "Kartal", 4, 55);    
	HayvanatBahcesi hayvanatBahcesi; //Hayvanat bah�esi s�n�f�nda nesne olu�turuyor.
	
	hayvanatBahcesi.hayvanEkle(aslan1); //Hayvanlar� hayvanat bah�esine eklemek i�in hayvanEkle() y�ntemi �a�r�l�yor.
    hayvanatBahcesi.hayvanEkle(aslan2);
    hayvanatBahcesi.hayvanEkle(aslan3);
    hayvanatBahcesi.hayvanEkle(zebra1);
    hayvanatBahcesi.hayvanEkle(zebra2);
    hayvanatBahcesi.hayvanEkle(zebra3);
    hayvanatBahcesi.hayvanEkle(kartal1);
    hayvanatBahcesi.hayvanEkle(kartal2);
    hayvanatBahcesi.hayvanEkle(kartal3);

    int secim; // Kullan�c�n�n se�im yapmas� i�in do-while yap�s� kullan�ld�. Men� se�imi i�in switch-case yap�s� kullan�ld�.
    do { //Kullan�c�ya men� g�steriliyor.
        cout << "----Hayvanat Bah�esi Men�s�----\n";
        cout << "1. Yeni Hayvan Ekle\n";
        cout << "2. T�m Hayvanlar� G�ster\n";
        cout << "3. Hayvan Besle\n";
        cout << "4. Hayvan�n Bilgilerini g�ncelle\n";
        cout << "5. ��k��\n";
        cout << "Se�iminizi yap�n�z: ";
        cin >> secim;

        switch(secim) {
            case 1: {
                string hayvanTipi;
                string ad;
                int yas;
                string renk;
                int uzunluk;
                int hiz;

				cout << "Hayvan�n ad�n� giriniz: ";
                cin >> ad;

                cout << "Eklenecek hayvan�n tipini se�iniz (1-Aslan, 2-Zebra, 3-Kartal): ";
                cin >> hayvanTipi;
                //Kullan�c� taraf�ndan se�ilen hayvan tipine g�re ilgili s�n�ftan nesne olu�turuluyor.
                if(hayvanTipi == "Aslan" || hayvanTipi == "aslan")
                {
                	cout << "Hayvan�n ya��n� giriniz: ";
                	cin >> yas;
					cout << "Aslan�n rengini giriniz: ";
                    cin >> renk;
                    hayvanatBahcesi.hayvanEkle(new Aslan(ad, "Aslan", yas, renk));
					cout<<"Hayvan ekleme ba�ar�l�"<<endl;	
				}
				else if(hayvanTipi == "Zebra" || hayvanTipi == "zebra")
				{
					cout << "Hayvan�n ya��n� giriniz: ";
                	cin >> yas;
					cout << "Zebra'n�n uzunlu�unu(cm cinsinden) giriniz: ";
                    cin >> uzunluk;
                    hayvanatBahcesi.hayvanEkle(new Zebra(ad, "Zebra", yas, uzunluk));
                    cout<<"Hayvan ekleme ba�ar�l�"<<endl;
				}
				else if(hayvanTipi == "Kartal" || hayvanTipi == "kartal")
				{
					cout << "Hayvan�n ya��n� giriniz: ";
                	cin >> yas;
					cout << "Kartal�n h�z�n� giriniz: ";
                    cin >> hiz;
                    hayvanatBahcesi.hayvanEkle(new Kartal(ad, "Kartal", yas, hiz));	
                    cout<<"Hayvan ekleme ba�ar�l�"<<endl;
				}
				else
				{
					cout << "Hatal� se�im!\n Tekrar men�ye d�n�yorsunuz..." << endl;
				}
				break;
            }
            case 2:
                hayvanatBahcesi.hayvanlariGoster(); // T�m hayvanlar� g�stermek i�in hayvanlariGoster() y�ntemi �a�r�l�yor.
                break;
            case 3: {
                string ad;
                cout << "Beslenecek hayvan�n ad�n� giriniz: ";
                cin >> ad;
                hayvanatBahcesi.hayvanBesle(ad); // Belirtilen hayvan� beslemek i�in hayvanBesle() y�ntemi �a�r�l�yor.
                break;
            }
            case 4: {
				string ad;
				string tur;
				string renk;
				int yas;
				double uzunluk;
				int hiz;
				
				cout << "�zellikleri g�ncellenecek hayvan�n ad�n� giriniz: ";
				cin >> ad;
				
				cout << "Hayvan�n t�r�n� se�iniz (1-Aslan, 2-Zebra, 3-Kartal): ";
				cin >> tur;
			
				cout << "Hayvan�n yeni ya��n� giriniz: ";
				cin >> yas;
			    // Kullan�c�n�n se�ti�i hayvan t�r�ne g�re ilgili �zellikler g�ncelleniyor.
				if(tur == "Aslan" || tur == "aslan") {
					cout << "Aslan�n yeni rengini giriniz: ";
					cin >> renk;
					for(auto &hayvan : hayvanatBahcesi.hayvanlar) {
						if(hayvan->getAd() == ad && dynamic_cast<Aslan*>(hayvan)) {
							dynamic_cast<Aslan*>(hayvan)->setRenk(renk);
							dynamic_cast<Aslan*>(hayvan)->setYas(yas);
							cout << "Aslan�n rengi ve ya�� g�ncellendi." << endl;
						}
					}
				} 
				else if(tur == "Zebra" || tur == "zebra") {
					cout << "Zebra'n�n yeni uzunlu�unu giriniz: ";
					cin >> uzunluk;
					for(auto &hayvan : hayvanatBahcesi.hayvanlar) {
						if(hayvan->getAd() == ad && dynamic_cast<Zebra*>(hayvan)) {
							dynamic_cast<Zebra*>(hayvan)->setUzunluk(uzunluk);
							dynamic_cast<Zebra*>(hayvan)->setYas(yas);
							cout << "Zebra'n�n uzunlu�u ve ya�� g�ncellendi." << endl;
						}
					}
				}	 
				else if(tur == "Kartal" || tur == "kartal") {
					cout << "Kartal�n yeni h�z�n� giriniz: ";
					cin >> hiz;
					for(auto &hayvan : hayvanatBahcesi.hayvanlar) {
						if(hayvan->getAd() == ad && dynamic_cast<Kartal*>(hayvan)) {
							dynamic_cast<Kartal*>(hayvan)->setHiz(hiz);
							dynamic_cast<Kartal*>(hayvan)->setYas(yas);
							cout << "Kartal�n h�z� ve ya�� g�ncellendi." << endl;
						}
					}
				} 
				else {
					cout << "Hatal� se�im!" << endl;
				}
				break; 
			}
            case 5: // Programdam ��k�� yapar.
                cout << "Programdan ��k�l�yor...";
                break;
			default:
                cout << "Hatal� se�im!" << endl;
        }
    } while(secim != 5); // Do-while yap�s� kullan�larak 1-5 aras� d���nda se�ilen se�imleri kabul etmeiyor ve mem� tekrar kullan�c�ya veriliyor.

    return 0;
}

