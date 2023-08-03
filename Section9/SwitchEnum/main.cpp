// Switch with enumeration

#include <iostream>

using namespace std;

int main()
{

    enum Suunta { vasen, oikea, ylos, alas };

    Suunta valinta(alas);

    switch(valinta) {
    case vasen:
        cout << "Menit vasemmalle!" << endl;
        break;
    case oikea:
        cout << "Menit oikealle!" << endl;
        break;
    default:
        cout << "Menit joko ylos tai alas.. entiia sit." << endl;
    }

    return 0;
}
