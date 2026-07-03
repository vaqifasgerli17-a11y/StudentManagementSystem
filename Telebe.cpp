#include "Telebe.h"
#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

Telebe::Telebe(string ad, string soyad, int id, double ortalama, float qurup) {
    this->ad = ad;
    this->soyad = soyad;
    this->id = id;
    this->ortalama = ortalama;
    this->qurup = qurup;
}

int Telebe::getId() const { return id; }
double Telebe::getOrtalama() const { return ortalama; }
float Telebe::getQurup() const { return qurup; }

void Telebe::melumatal() {
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // öncə buffer təmizlənir
    cout << "Telebenin adi: ";
    getline(cin, ad);
    cout << "Telebenin soyadi: ";
    getline(cin, soyad);
    cout << "Telebenin ID-si: ";
    cin >> id;
    cout << "Telebenin qurupu: ";
    cin >> qurup;
    cout << "Telebenin ortalamasi: ";
    cin >> ortalama;
}

void Telebe::melumatgoster() const {
    cout << "Ad: " << left << setw(15) << ad
        << "Soyad: " << left << setw(15) << soyad
        << "ID: " << left << setw(5) << id
        << "Qrup: " << left << setw(5) << qurup
        << "Ortalama: " << left << setw(5) << ortalama
        << endl;
}

void Telebe::FaylaYaz(ofstream& file) const {
    file << ad << endl;
    file << soyad << endl;
    file << id << endl;
    file << qurup << endl;
    file << ortalama << endl;
}

bool Telebe::FayldanOxu(ifstream& file) {
    if (!getline(file, ad)) return false;
    if (!getline(file, soyad)) return false;
    if (!(file >> id >> qurup >> ortalama)) return false;
    file.ignore(numeric_limits<streamsize>::max(), '\n');
    return true;
}
