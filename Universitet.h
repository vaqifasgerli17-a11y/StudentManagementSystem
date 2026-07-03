#ifndef UNIVERSITET_H
#define UNIVERSITET_H

#include <vector>
#include <string>
#include "Telebe.h"

class Universitet {
private:
    std::vector<Telebe> telebeler;

public:
    void TelebeElaveEt(const Telebe& t);
    void Goster() const;

    void Idileaxtar(int id) const;
    bool IdMovcuddur(int id) const;
    void Sil(int id);

    void OrtalamaAraligindaAxtar(double alt, double ust) const;
    void QurupAxtar(float qurup) const;
    void EnyuksekOrtalama() const;

    void faylaYaz(const std::string& filename) const;
    void fayldanOxu(const std::string& filename);
};

#endif
