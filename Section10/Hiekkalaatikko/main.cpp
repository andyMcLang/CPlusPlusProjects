#include <iostream>
#include <string>

// Kysytään käyttäjältä sanoja tai lauseita ja muodostetaan sanoista kuusi-kuvio

using namespace std;

int main()
{
    string sana;
    cout << "Anna sana: ";
    getline(cin, sana);
    cout << "Sanasi on: " << sana;
    cout << "\nMuodostetaan kuusi: " << endl;
    cout << "\n============================================\n";

    int riveja = sana.length();
    int sijainti{ 0 };

    for(char kirjain : sana) {
        size_t valit = riveja - sijainti;
        while(valit > 1) {
            cout << " ";
            --valit;
        }

        for(int j = 0; j < sijainti; j++) {
            cout << sana.at(j);
        }

        cout << kirjain;

        for(int j = sijainti - 1; j >= 0; j--) {
            cout << sana.at(j);
        }

        cout << endl;
        ++sijainti;
    }

    return 0;
}
