#ifndef HAYVAN_H
#define HAYVAN_H

#include <string>
using namespace std;
class Hayvan {
protected:
    string ad;
    string tur;
    int yas;
public:
    Hayvan(const string &ad, const string &tur, int yas);// Hayvan sınıfının yapıcı işlevi. Ad, tür ve yaş değerlerini parametre olarak alır.
    virtual ~Hayvan() = default;// Sanal yıkıcı işlev, türetilmiş sınıfların düzgün bir şekilde bellekten serbest bırakılmasını sağlar.

    const string &getAd() const; // Hayvanın adını döndüren bir işlev.
    const string &getTur() const; // Hayvanın türünü döndüren bir işlev.
    int getYas() const;// Hayvanın yaşını döndüren bir işlev.

    void setAd(const string &ad);// Hayvanın adını ayarlayan bir işlev.
    void setTur(const string &tur);// Hayvanın türünü ayarlayan bir işlev.
    void setYas(int yas);// Hayvanın yaşını ayarlayan bir işlev.
};

#endif //HAYVAN_H

