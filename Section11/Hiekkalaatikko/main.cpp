#include <iostream>
#include <string>

using namespace std;

int main()
{
    string sana;
    cout << "Anna sanasi: ";
    getline(cin, sana);
    int riveja = sana.length();

    int sijainti{ 0 };

    for(char kirjain : sana) {
        int valeja = riveja - sijainti;
/*
        for(int j = 0; j < valeja; j++) {
            cout << " ";
        }

        for(int j = 0; j < sijainti; j++) {
            cout << sana.at(j);
        }
*/
        cout << kirjain;

        for(int j = sijainti - 1; j >= 0; j--) {
            cout << sana.at(j);
        }

        cout << endl;
        sijainti++;
    }

    return 0;
}
