#include <iostream>
#include "Telebe.h"
#include "Universitet.h"

using namespace std;

int main() {
    Universitet uni;
    uni.fayldanOxu("telebeler.txt");

    int secim;
    do {
        cout << "\n===== MENYU =====\n";
        cout << "1. Telebe elave et\n";
        cout << "2. Telebeleri goster\n";
        cout << "3. ID ile axtar\n";
        cout << "4. Ortalama araliginda axtar\n";
        cout << "5. Qrup axtar\n";
        cout << "6. Telebeni sil\n";
        cout << "7. En yuksek ortalama\n";
        cout << "8. Fayla yaz\n";
        cout << "9. Fayldan oxu\n";
        cout << "0. Cixis\n";
        cout << "Secim: ";
        cin >> secim;

        switch (secim) {
        case 1: {
            Telebe t;
            t.melumatal();
            if (uni.IdMovcuddur(t.getId()))
                cout << "Bu ID artiq movcuddur!\n";
            else
                uni.TelebeElaveEt(t);
            break;
        }
        case 2:
            uni.Goster();
            break;
        case 3: {
            int id;
            cout << "ID daxil edin: ";
            cin >> id;
            uni.Idileaxtar(id);
            break;
        }
        case 4: {
            double alt, ust;
            cout << "Ortalama araligini daxil edin (alt ust): ";
            cin >> alt >> ust;
            uni.OrtalamaAraligindaAxtar(alt, ust);
            break;
        }
        case 5: {
            float qurup;
            cout << "Qurupu daxil edin: ";
            cin >> qurup;
            uni.QurupAxtar(qurup);
            break;
        }
        case 6: {
            int id;
            cout << "Silmek istediyiniz ID: ";
            cin >> id;
            uni.Sil(id);
            break;
        }
        case 7:
            uni.EnyuksekOrtalama();
            break;
        case 8:
            uni.faylaYaz("telebeler.txt");
            break;
        case 9:
            uni.fayldanOxu("telebeler.txt");
            break;
        case 0:
            cout << "Cixis...\n";
            break;
        default:
            cout << "Yanlis secim! Tekrar cehd edin.\n";
        }

    } while (secim != 0);

    return 0;
}
