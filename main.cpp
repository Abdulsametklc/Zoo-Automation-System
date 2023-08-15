/*Abdulsamet 
KILIÇ
220707120
Bilgisayar Mühendisliði (Örgün Öðretim)
Nesneye Yönelik Programlama - MBM104-A
2022-2023 Bahar Dönemi
Programlama Projesi 1
Dr. Öðr. Üyesi Ahmet Coþkunçay*/

#include <clocale>
#include <iostream>
#include "Hayvan.h" //Hayvan sýnýfýnýn baþlýk dosyasý
#include "Aslan.h" //Aslan sýnýfýnýn baþlýk dosyasý
#include "Zebra.h" //Zebra sýnýfýnýn baþlýk dosyasý
#include "Kartal.h" //Kartal sýnýfýnýn baþlýk dosyasý
#include "HayvanatBahcesi.h" //Hayvanat Bahçesi sýnýfýnýn baþlýk dosyasý
#include "Hayvan.cpp" //Hayvan sýnýfýnýn kaynak dosyasý
#include "Aslan.cpp" //Aslan sýnýfýnýn kaynak dosyasý
#include "Zebra.cpp" //Zebra sýnýfýnýn kaynak dosyasý
#include "Kartal.cpp" //Kartal sýnýfýnýn kaynak dosyasý
#include "HayvanatBahcesi.cpp" //Hayvanat Bahçesi sýnýfýnýn kaynak dosyasý

using namespace std;

int main() {
    setlocale(LC_ALL, "Turkish"); //fonskiyonu kullanarak Türkçe dil ayarýný yapar.
    
    Hayvan *aslan1 = new Aslan("Simba", "Aslan", 5, "Kahverengi"); // Hayvan(aslan, zebra ve kartal) sýnýflarýndan örnek nesneler oluþturuyor.
    Hayvan *aslan2 = new Aslan("Mufasa", "Aslan", 7, "Sarý");
    Hayvan *aslan3 = new Aslan("Zula", "Aslan",10,"Siyah");
    Hayvan *zebra1 = new Zebra("Marty", "Zebra", 3, 170);
    Hayvan *zebra2 = new Zebra("Alex", "Zebra", 4, 175);
    Hayvan *zebra3 = new Zebra("Sadio", "Zebra", 5, 180);
    Hayvan *kartal1 = new Kartal("Eagle", "Kartal", 2, 40);
    Hayvan *kartal2 = new Kartal("Hawk", "Kartal", 3, 45);
    Hayvan *kartal3 = new Kartal("George", "Kartal", 4, 55);    
	HayvanatBahcesi hayvanatBahcesi; //Hayvanat bahçesi sýnýfýnda nesne oluþturuyor.
	
	hayvanatBahcesi.hayvanEkle(aslan1); //Hayvanlarý hayvanat bahçesine eklemek için hayvanEkle() yöntemi çaðrýlýyor.
    hayvanatBahcesi.hayvanEkle(aslan2);
    hayvanatBahcesi.hayvanEkle(aslan3);
    hayvanatBahcesi.hayvanEkle(zebra1);
    hayvanatBahcesi.hayvanEkle(zebra2);
    hayvanatBahcesi.hayvanEkle(zebra3);
    hayvanatBahcesi.hayvanEkle(kartal1);
    hayvanatBahcesi.hayvanEkle(kartal2);
    hayvanatBahcesi.hayvanEkle(kartal3);

    int secim; // Kullanýcýnýn seçim yapmasý için do-while yapýsý kullanýldý. Menü seçimi için switch-case yapýsý kullanýldý.
    do { //Kullanýcýya menü gösteriliyor.
        cout << "----Hayvanat Bahçesi Menüsü----\n";
        cout << "1. Yeni Hayvan Ekle\n";
        cout << "2. Tüm Hayvanlarý Göster\n";
        cout << "3. Hayvan Besle\n";
        cout << "4. Hayvanýn Bilgilerini güncelle\n";
        cout << "5. Çýkýþ\n";
        cout << "Seçiminizi yapýnýz: ";
        cin >> secim;

        switch(secim) {
            case 1: {
                string hayvanTipi;
                string ad;
                int yas;
                string renk;
                int uzunluk;
                int hiz;

				cout << "Hayvanýn adýný giriniz: ";
                cin >> ad;

                cout << "Eklenecek hayvanýn tipini seçiniz (1-Aslan, 2-Zebra, 3-Kartal): ";
                cin >> hayvanTipi;
                //Kullanýcý tarafýndan seçilen hayvan tipine göre ilgili sýnýftan nesne oluþturuluyor.
                if(hayvanTipi == "Aslan" || hayvanTipi == "aslan")
                {
                	cout << "Hayvanýn yaþýný giriniz: ";
                	cin >> yas;
					cout << "Aslanýn rengini giriniz: ";
                    cin >> renk;
                    hayvanatBahcesi.hayvanEkle(new Aslan(ad, "Aslan", yas, renk));
					cout<<"Hayvan ekleme baþarýlý"<<endl;	
				}
				else if(hayvanTipi == "Zebra" || hayvanTipi == "zebra")
				{
					cout << "Hayvanýn yaþýný giriniz: ";
                	cin >> yas;
					cout << "Zebra'nýn uzunluðunu(cm cinsinden) giriniz: ";
                    cin >> uzunluk;
                    hayvanatBahcesi.hayvanEkle(new Zebra(ad, "Zebra", yas, uzunluk));
                    cout<<"Hayvan ekleme baþarýlý"<<endl;
				}
				else if(hayvanTipi == "Kartal" || hayvanTipi == "kartal")
				{
					cout << "Hayvanýn yaþýný giriniz: ";
                	cin >> yas;
					cout << "Kartalýn hýzýný giriniz: ";
                    cin >> hiz;
                    hayvanatBahcesi.hayvanEkle(new Kartal(ad, "Kartal", yas, hiz));	
                    cout<<"Hayvan ekleme baþarýlý"<<endl;
				}
				else
				{
					cout << "Hatalý seçim!\n Tekrar menüye dönüyorsunuz..." << endl;
				}
				break;
            }
            case 2:
                hayvanatBahcesi.hayvanlariGoster(); // Tüm hayvanlarý göstermek için hayvanlariGoster() yöntemi çaðrýlýyor.
                break;
            case 3: {
                string ad;
                cout << "Beslenecek hayvanýn adýný giriniz: ";
                cin >> ad;
                hayvanatBahcesi.hayvanBesle(ad); // Belirtilen hayvaný beslemek için hayvanBesle() yöntemi çaðrýlýyor.
                break;
            }
            case 4: {
				string ad;
				string tur;
				string renk;
				int yas;
				double uzunluk;
				int hiz;
				
				cout << "Özellikleri güncellenecek hayvanýn adýný giriniz: ";
				cin >> ad;
				
				cout << "Hayvanýn türünü seçiniz (1-Aslan, 2-Zebra, 3-Kartal): ";
				cin >> tur;
			
				cout << "Hayvanýn yeni yaþýný giriniz: ";
				cin >> yas;
			    // Kullanýcýnýn seçtiði hayvan türüne göre ilgili özellikler güncelleniyor.
				if(tur == "Aslan" || tur == "aslan") {
					cout << "Aslanýn yeni rengini giriniz: ";
					cin >> renk;
					for(auto &hayvan : hayvanatBahcesi.hayvanlar) {
						if(hayvan->getAd() == ad && dynamic_cast<Aslan*>(hayvan)) {
							dynamic_cast<Aslan*>(hayvan)->setRenk(renk);
							dynamic_cast<Aslan*>(hayvan)->setYas(yas);
							cout << "Aslanýn rengi ve yaþý güncellendi." << endl;
						}
					}
				} 
				else if(tur == "Zebra" || tur == "zebra") {
					cout << "Zebra'nýn yeni uzunluðunu giriniz: ";
					cin >> uzunluk;
					for(auto &hayvan : hayvanatBahcesi.hayvanlar) {
						if(hayvan->getAd() == ad && dynamic_cast<Zebra*>(hayvan)) {
							dynamic_cast<Zebra*>(hayvan)->setUzunluk(uzunluk);
							dynamic_cast<Zebra*>(hayvan)->setYas(yas);
							cout << "Zebra'nýn uzunluðu ve yaþý güncellendi." << endl;
						}
					}
				}	 
				else if(tur == "Kartal" || tur == "kartal") {
					cout << "Kartalýn yeni hýzýný giriniz: ";
					cin >> hiz;
					for(auto &hayvan : hayvanatBahcesi.hayvanlar) {
						if(hayvan->getAd() == ad && dynamic_cast<Kartal*>(hayvan)) {
							dynamic_cast<Kartal*>(hayvan)->setHiz(hiz);
							dynamic_cast<Kartal*>(hayvan)->setYas(yas);
							cout << "Kartalýn hýzý ve yaþý güncellendi." << endl;
						}
					}
				} 
				else {
					cout << "Hatalý seçim!" << endl;
				}
				break; 
			}
            case 5: // Programdam çýkýþ yapar.
                cout << "Programdan çýkýlýyor...";
                break;
			default:
                cout << "Hatalý seçim!" << endl;
        }
    } while(secim != 5); // Do-while yapýsý kullanýlarak 1-5 arasý dýþýnda seçilen seçimleri kabul etmeiyor ve memü tekrar kullanýcýya veriliyor.

    return 0;
}

