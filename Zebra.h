/*Abdulsamet KILI�
220707120
Bilgisayar M�hendisli�i (�rg�n ��retim)
Nesneye Y�nelik Programlama - MBM104-A
2022-2023 Bahar D�nemi
Programlama Projesi 1
Dr. ��r. �yesi Ahmet Co�kun�ay*/
#ifndef ZEBRA_H
#define ZEBRA_H

#include "Hayvan.h"
using namespace std;

class Zebra: public Hayvan {
private:
    double uzunluk;
public:
    Zebra(const string &ad, const std::string &tur, int yas, double uzunluk);// Zebra s�n�f�n�n yap�c�s�
    ~Zebra() override = default;

    double getUzunluk() const;// uzunluk (length) de�erini d�nd�ren i�lev
    void setUzunluk(double uzunluk);// uzunluk (length) de�erini belirleyen i�lev
    void setYas(int newYas); // yeni ya� de�erini belirleyen i�lev


#endif //ZEBRA_H

