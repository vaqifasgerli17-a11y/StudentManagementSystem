#include "Universitet.h"
#include <iostream>
#include <fstream>
#include <algorithm>
#include <cmath>

using namespace std;

void Universitet::TelebeElaveEt(const Telebe& t) {
    telebeler.push_back(t);
}

void Universitet::Goster() const {
    if (telebeler.empty()) {
        cout << "Heç bir telebe yoxdur.\n";
        return;
    }
    for (const auto& t : telebeler) {
        t.melumatgoster();
    }
}

void Universitet::Idileaxtar(int id) const {
    bool found = false;
    for (const auto& t : telebeler) {
        if (t.getId() == id) {
            t.melumatgoster();
            found = true;
            break;
        }
    }
    if (!found) cout << "Telebe tapilmadi.\n";
}

bool Universitet::IdMovcuddur(int id) const {
    for (const auto& t : telebeler) {
        if (t.getId() == id) return true;
    }
    return false;
}

void Universitet::Sil(int id) {
    auto it = remove_if(telebeler.begin(), telebeler.end(),
        [id](const Telebe& t) { return t.getId() == id; });
    if (it != telebeler.end()) {
        telebeler.erase(it, telebeler.end());
        cout << "Telebe silindi.\n";
    }
    else {
        cout << "Belə ID yoxdur.\n";
    }
}

void Universitet::OrtalamaAraligindaAxtar(double alt, double ust) const {
    bool found = false;
    for (const auto& t : telebeler) {
        if (t.getOrtalama() >= alt && t.getOrtalama() <= ust) {
            t.melumatgoster();
            found = true;
        }
    }
    if (!found) cout << "Heç bir telebe tapilmadi.\n";
}

void Universitet::QurupAxtar(float qurup) const {
    bool found = false;
    for (const auto& t : telebeler) {
        if (fabs(t.getQurup() - qurup) < 0.001f) {
            t.melumatgoster();
            found = true;
        }
    }
    if (!found) cout << "Heç bir telebe tapilmadi.\n";
}

void Universitet::EnyuksekOrtalama() const {
    if (telebeler.empty()) {
        cout << "Telebe yoxdur.\n";
        return;
    }
    double max = telebeler[0].getOrtalama();
    for (const auto& t : telebeler)
        if (t.getOrtalama() > max) max = t.getOrtalama();

    cout << "En yuksek ortalamali telebeler:\n";
    for (const auto& t : telebeler)
        if (t.getOrtalama() == max)
            t.melumatgoster();
}

void Universitet::faylaYaz(const string& filename) const {
    ofstream file(filename);
    for (const auto& t : telebeler)
        t.FaylaYaz(file);
    cout << "Fayla yazildi.\n";
}

void Universitet::fayldanOxu(const string& filename) {
    ifstream file(filename);
    if (!file) {
        cout << "Fayl acilamadi.\n";
        return;
    }
    telebeler.clear();
    Telebe temp;
    while (temp.FayldanOxu(file)) {
        telebeler.push_back(temp);
    }
    cout << "Fayldan oxundu.\n";
}
