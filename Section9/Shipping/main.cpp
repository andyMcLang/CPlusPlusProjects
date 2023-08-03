// Section 9
// Kuljetus

/*
 * Toimituskululaskuri
 *
 * Pyydä käyttäjältä paketin mitat tuumina pituus,
 * leveys ja korkeus – näiden tulee olla kokonaislukuja
 *
 * Kaikkien mittojen tulee olla enintään 10 tuumaa tai emme voi lähettää niitä
 *
 * Perushinta 2,50 dollaria
 * Jos pakkauksen tilavuus on suurempi kuin 100 kuutiometriä, peritään 10 %:n lisämaksu
 * Jos pakkauksen tilavuus on suurempi kuin 500 kuutiometriä, peritään 25 %:n lisämaksu
 *
 */

#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
    int paketinTilavuus{ 0 };
    int pituus{}, leveys{}, korkeus{};
    double perusHinta{ 2.5 };
    double lopullinenHinta{ 0 };
    int maxRaja{ 10 };
    double lisaKustannus1{ 0.10 };
    double lisaKustannus2{ 0.25 };
    int tilavuusYlitys1{ 100 };
    int tilavuusYlitys2{ 500 };

    cout << "Anna paketin pituus, leveys ja korkeus tassa muodossa: PITUUS LEVEYS KORKEUS : ";
    cin >> pituus >> leveys >> korkeus;

    if(pituus > maxRaja || leveys > maxRaja || korkeus > maxRaja) {
        cout << "Paketin lahettaminen ei onnistu koska kaikki mitat ylittaa 10 arvon!" << endl;
    } else {
        lopullinenHinta = perusHinta;
        paketinTilavuus = pituus * leveys * korkeus;

        if(paketinTilavuus > tilavuusYlitys2) {
            lopullinenHinta += lopullinenHinta * lisaKustannus2;
            cout << "Paketin tilavuus ylittyi 500:lla!" << endl;
        } else if(paketinTilavuus > tilavuusYlitys1) {
            lopullinenHinta += lopullinenHinta * lisaKustannus1;
            cout << "Paketin tilavuus ylittyi 100:lla!" << endl;
        } else {
            lopullinenHinta = perusHinta;
        }

        cout << fixed << setprecision(2); // prints dollas nice
        cout << "Paketin tilavuus: " << paketinTilavuus << " tuumaa." << endl;
        cout << "Paketin hinta: " << lopullinenHinta << endl;
    }

    return 0;
}
