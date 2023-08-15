#include <clocale>
#include <iostream>
#include "Hayvan.h" //Hayvan sınıfının başlık dosyası
#include "Aslan.h" //Aslan sınıfının başlık dosyası
#include "Zebra.h" //Zebra sınıfının başlık dosyası
#include "Kartal.h" //Kartal sınıfının başlık dosyası
#include "HayvanatBahcesi.h" //Hayvanat Bahçesi sınıfının başlık dosyası
#include "Hayvan.cpp" //Hayvan sınıfının kaynak dosyası
#include "Aslan.cpp" //Aslan sınıfının kaynak dosyası
#include "Zebra.cpp" //Zebra sınıfının kaynak dosyası
#include "Kartal.cpp" //Kartal sınıfının kaynak dosyası
#include "HayvanatBahcesi.cpp" //Hayvanat Bahçesi sınıfının kaynak dosyası

using namespace std;

int main() {
    setlocale(LC_ALL, "Turkish"); //fonskiyonu kullanarak Türkçe dil ayarını yapar.
    
    Hayvan *aslan1 = new Aslan("Simba", "Aslan", 5, "Kahverengi"); // Hayvan(aslan, zebra ve kartal) sınıflarından örnek nesneler oluşturuyor.
    Hayvan *aslan2 = new Aslan("Mufasa", "Aslan", 7, "Sarı");
    Hayvan *aslan3 = new Aslan("Zula", "Aslan",10,"Siyah");
    Hayvan *zebra1 = new Zebra("Marty", "Zebra", 3, 170);
    Hayvan *zebra2 = new Zebra("Alex", "Zebra", 4, 175);
    Hayvan *zebra3 = new Zebra("Sadio", "Zebra", 5, 180);
    Hayvan *kartal1 = new Kartal("Eagle", "Kartal", 2, 40);
    Hayvan *kartal2 = new Kartal("Hawk", "Kartal", 3, 45);
    Hayvan *kartal3 = new Kartal("George", "Kartal", 4, 55);    
	HayvanatBahcesi hayvanatBahcesi; //Hayvanat bahçesi sınıfında nesne oluşturuyor.
	
	hayvanatBahcesi.hayvanEkle(aslan1); //Hayvanları hayvanat bahçesine eklemek için hayvanEkle() yöntemi çağrılıyor.
    hayvanatBahcesi.hayvanEkle(aslan2);
    hayvanatBahcesi.hayvanEkle(aslan3);
    hayvanatBahcesi.hayvanEkle(zebra1);
    hayvanatBahcesi.hayvanEkle(zebra2);
    hayvanatBahcesi.hayvanEkle(zebra3);
    hayvanatBahcesi.hayvanEkle(kartal1);
    hayvanatBahcesi.hayvanEkle(kartal2);
    hayvanatBahcesi.hayvanEkle(kartal3);

    int secim; // Kullanıcının seçim yapması için do-while yapısı kullanıldı. Menü seçimi için switch-case yapısı kullanıldı.
    do { //Kullanıcıya menü gösteriliyor.
        cout << "----Hayvanat Bahçesi Menüsü----\n";
        cout << "1. Yeni Hayvan Ekle\n";
        cout << "2. Tüm Hayvanları Göster\n";
        cout << "3. Hayvan Besle\n";
        cout << "4. Hayvanın Bilgilerini güncelle\n";
        cout << "5. Çıkış\n";
        cout << "Seçiminizi yapınız: ";
        cin >> secim;

        switch(secim) {
            case 1: {
                string hayvanTipi;
                string ad;
                int yas;
                string renk;
                int uzunluk;
                int hiz;

				cout << "Hayvanın adını giriniz: ";
                cin >> ad;

                cout << "Eklenecek hayvanın tipini seçiniz (1-Aslan, 2-Zebra, 3-Kartal): ";
                cin >> hayvanTipi;
                //Kullanıcı tarafından seçilen hayvan tipine göre ilgili sınıftan nesne oluşturuluyor.
                if(hayvanTipi == "Aslan" || hayvanTipi == "aslan")
                {
                	cout << "Hayvanın yaşını giriniz: ";
                	cin >> yas;
					cout << "Aslanın rengini giriniz: ";
                    cin >> renk;
                    hayvanatBahcesi.hayvanEkle(new Aslan(ad, "Aslan", yas, renk));
					cout<<"Hayvan ekleme başarılı"<<endl;	
				}
				else if(hayvanTipi == "Zebra" || hayvanTipi == "zebra")
				{
					cout << "Hayvanın yaşını giriniz: ";
                	cin >> yas;
					cout << "Zebra'nın uzunluğunu(cm cinsinden) giriniz: ";
                    cin >> uzunluk;
                    hayvanatBahcesi.hayvanEkle(new Zebra(ad, "Zebra", yas, uzunluk));
                    cout<<"Hayvan ekleme başarılı"<<endl;
				}
				else if(hayvanTipi == "Kartal" || hayvanTipi == "kartal")
				{
					cout << "Hayvanın yaşını giriniz: ";
                	cin >> yas;
					cout << "Kartalın hızını giriniz: ";
                    cin >> hiz;
                    hayvanatBahcesi.hayvanEkle(new Kartal(ad, "Kartal", yas, hiz));	
                    cout<<"Hayvan ekleme başarılı"<<endl;
				}
				else
				{
					cout << "Hatalı seçim!\n Tekrar menüye dönüyorsunuz..." << endl;
				}
				break;
            }
            case 2:
                hayvanatBahcesi.hayvanlariGoster(); // Tüm hayvanları göstermek için hayvanlariGoster() yöntemi çağrılıyor.
                break;
            case 3: {
                string ad;
                cout << "Beslenecek hayvanın adını giriniz: ";
                cin >> ad;
                hayvanatBahcesi.hayvanBesle(ad); // Belirtilen hayvanı beslemek için hayvanBesle() yöntemi çağrılıyor.
                break;
            }
            case 4: {
				string ad;
				string tur;
				string renk;
				int yas;
				double uzunluk;
				int hiz;
				
				cout << "Özellikleri güncellenecek hayvanın adını giriniz: ";
				cin >> ad;
				
				cout << "Hayvanın türünü seçiniz (1-Aslan, 2-Zebra, 3-Kartal): ";
				cin >> tur;
			
				cout << "Hayvanın yeni yaşını giriniz: ";
				cin >> yas;
			    // Kullanıcının seçtiği hayvan türüne göre ilgili özellikler güncelleniyor.
				if(tur == "Aslan" || tur == "aslan") {
					cout << "Aslanın yeni rengini giriniz: ";
					cin >> renk;
					for(auto &hayvan : hayvanatBahcesi.hayvanlar) {
						if(hayvan->getAd() == ad && dynamic_cast<Aslan*>(hayvan)) {
							dynamic_cast<Aslan*>(hayvan)->setRenk(renk);
							dynamic_cast<Aslan*>(hayvan)->setYas(yas);
							cout << "Aslanın rengi ve yaşı güncellendi." << endl;
						}
					}
				} 
				else if(tur == "Zebra" || tur == "zebra") {
					cout << "Zebra'nın yeni uzunluğunu giriniz: ";
					cin >> uzunluk;
					for(auto &hayvan : hayvanatBahcesi.hayvanlar) {
						if(hayvan->getAd() == ad && dynamic_cast<Zebra*>(hayvan)) {
							dynamic_cast<Zebra*>(hayvan)->setUzunluk(uzunluk);
							dynamic_cast<Zebra*>(hayvan)->setYas(yas);
							cout << "Zebra'nın uzunluğu ve yaşı güncellendi." << endl;
						}
					}
				}	 
				else if(tur == "Kartal" || tur == "kartal") {
					cout << "Kartalın yeni hızını giriniz: ";
					cin >> hiz;
					for(auto &hayvan : hayvanatBahcesi.hayvanlar) {
						if(hayvan->getAd() == ad && dynamic_cast<Kartal*>(hayvan)) {
							dynamic_cast<Kartal*>(hayvan)->setHiz(hiz);
							dynamic_cast<Kartal*>(hayvan)->setYas(yas);
							cout << "Kartalın hızı ve yaşı güncellendi." << endl;
						}
					}
				} 
				else {
					cout << "Hatalı seçim!" << endl;
				}
				break; 
			}
            case 5: // Programdam çıkış yapar.
                cout << "Programdan çıkılıyor...";
                break;
			default:
                cout << "Hatalı seçim!" << endl;
        }
    } while(secim != 5); // Do-while yapısı kullanılarak 1-5 arası dışında seçilen seçimleri kabul etmeiyor ve memü tekrar kullanıcıya veriliyor.

    return 0;
}

