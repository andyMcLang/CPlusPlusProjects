#include <iostream>
#include <string>

// Kysytään käyttäjältä sanoja tai lauseita ja muodostetaan sanoista kuusi-kuvio

using namespace std;

int main()
{
    string sana;
    cout << "Anna sana tai lause: ";
    getline(cin, sana);
    int riveja = sana.length();
    int sijainti{ 0 };

    for(char kirjain : sana) {
        size_t valeja = riveja - sijainti;
        while(valeja > 1) {
            cout << " ";
            valeja--;
        }

        for(int j = 0; j < sijainti; j++) {
            cout << sana.at(j);
        }

        cout << kirjain;

        for(int j = sijainti - 1; j >= 0; j--) {
            cout << sana.at(j);
            cout << "<Eka kierros j-arvolla: " << j << "> ";
        }

        cout << endl;
        sijainti++;
    }

    cout << "\n=========================================\n";

    return 0;
}
