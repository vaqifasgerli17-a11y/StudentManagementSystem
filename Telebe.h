#ifndef TELEBE_H
#define TELEBE_H

#include <string>
#include <fstream>

class Telebe {
private:
    std::string ad;
    std::string soyad;
    int id;
    double ortalama;
    float qurup;

public:
    Telebe(std::string ad = "", std::string soyad = "", int id = 0, double ortalama = 0.0, float qurup = 0.0);

    int getId() const;
    double getOrtalama() const;
    float getQurup() const;

    void melumatal();
    void melumatgoster() const;

    void FaylaYaz(std::ofstream& file) const;
    bool FayldanOxu(std::ifstream& file);
};

#endif
