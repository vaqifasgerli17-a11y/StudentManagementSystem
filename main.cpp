#include <iostream>
#include <map>
#include <functional>
#include "Telebe.h"
#include "Universitet.h"

using namespace std;

int main() {
    Universitet uni;
    uni.fayldanOxu("telebeler.txt");

    map<int, function<void()>> menu = {
        {1, [&]() {
            Telebe t;
            t.melumatal();
            if (uni.IdMovcuddur(t.getId()))
                cout << "Bu ID artiq movcuddur!\n";
            else
                uni.TelebeElaveEt(t);
        }},
        {2, [&]() { uni.Goster(); }},
        {3, [&]() {
            int id;
            cout << "ID daxil edin: ";
            cin >> id;
            uni.Idileaxtar(id);
        }},
        {4, [&]() {
            double alt, ust;
            cout << "Ortalama araligini daxil edin (alt ust): ";
            cin >> alt >> ust;
            uni.OrtalamaAraligindaAxtar(alt, ust);
        }},
        {5, [&]() {
            float qurup;
            cout << "Qurupu daxil edin: ";
            cin >> qurup;
            uni.QurupAxtar(qurup);
        }},
        {6, [&]() {
            int id;
            cout << "Silmek istediyiniz ID: ";
            cin >> id;
            uni.Sil(id);
        }},
        {7, [&]() { uni.EnyuksekOrtalama(); }},
        {8, [&]() { uni.faylaYaz("telebeler.txt"); }},
        {9, [&]() { uni.fayldanOxu("telebeler.txt"); }},
        {0, [&]() { cout << "Cixis...\n"; }}
    };

    int secim;
    while (true) {
        cout << "\n===== MENYU =====\n";
        cout << "1. Telebe elave et\n2. Telebeleri goster\n3. ID ile axtar\n";
        cout << "4. Ortalama araliginda axtar\n5. Qrup axtar\n6. Telebeni sil\n";
        cout << "7. En yuksek ortalama\n8. Fayla yaz\n9. Fayldan oxu\n0. Cixis\n";
        cout << "Secim: ";
        cin >> secim;

        auto it = menu.find(secim);
        if (it != menu.end()) it->second();
        else cout << "Yanlis secim! Tekrar cehd edin.\n";

        if (secim == 0) break;
    }

    return 0;
}
