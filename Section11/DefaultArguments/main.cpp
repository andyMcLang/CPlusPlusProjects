// Section 11
// 106. Default Argument Values

#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

void tervehdys(string nimi = "", string arvo = "herra", string jalkilause = "");

void tervehdys(string nimi, string arvo, string jalkilause)
{
    cout << "Terve, " << arvo << " " << nimi << " " << jalkilause << endl;
}

double laske_vero(double alkuhinta, double veroprosentti = 0.06, double toimituskulut = 3.50);

double laske_vero(double alkuhinta, double veroprosentti, double toimituskulut)
{
    return alkuhinta += (alkuhinta * veroprosentti) + toimituskulut;
}

int main()
{
    double hinta{ 0 };
    hinta = laske_vero(100.0, 0.08, 4.25); // käyttää ei-oletettuja arvoja 100 + 8 + 4.25

    cout << fixed << setprecision(2);
    cout << "Lopullinen hinta: " << hinta << endl; // 112.25

    hinta = laske_vero(100.0, 0.08);               // käyttää oletustoimituskulun 100 + 8 + 3.50
    cout << "Lopullinen hinta: " << hinta << endl; // 111.50

    hinta = laske_vero(200.0);                     // käyttää oletusveroprosentin ja toimituskulun 200 + 12 + 3.50
    cout << "Lopullinen hinta: " << hinta << endl; // 215.50

    tervehdys("Anna", "neiti", "Mita kuuluu?");
    tervehdys("Timo");

    return 0;
}
