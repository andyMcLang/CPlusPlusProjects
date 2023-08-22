// Section 11
// Satunnaisnumerot

#include <cstdlib> // vaaditaan rand() lausekkeelle
#include <ctime>   // vaaditaan time() lausekkeelle
#include <iostream>

using namespace std;

int main()
{

    int satunnaisNumero{};
    size_t count{ 10 }; // numerot, jotka arvotaan satunnaisesti
    int min{ 1 };       // minimiarvo
    int max{ 6 };       // maksimiarvo

    // siemen (seed) satunnaisnumeron arvonnalle
    // jos siementä ei käytetä arvonnassa, niin samat arvotut numerot jotka arvotaan ekalla kerralla, toistuu

    cout << "RAND_MAX minun systeemissa on:" << RAND_MAX << endl;
    srand(time(nullptr));

    for(size_t i{ 1 }; i <= count; ++i) {
        satunnaisNumero = rand() % max + min; // generoi satunnaisnumerot min ja mix valilla
        cout << satunnaisNumero << endl;
    }

    cout << endl;
    return 0;
}
