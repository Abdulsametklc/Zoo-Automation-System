#ifndef ZEBRA_H
#define ZEBRA_H

#include "Hayvan.h"
using namespace std;

class Zebra: public Hayvan {
private:
    double uzunluk;
public:
    Zebra(const string &ad, const std::string &tur, int yas, double uzunluk);// Zebra sınıfının yapıcısı
    ~Zebra() override = default;

    double getUzunluk() const;// uzunluk (length) değerini döndüren işlev
    void setUzunluk(double uzunluk);// uzunluk (length) değerini belirleyen işlev
    void setYas(int newYas); // yeni yaş değerini belirleyen işlev


#endif //ZEBRA_H

