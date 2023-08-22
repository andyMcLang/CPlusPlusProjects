// Section 11
// Matikka esimerkit

#include <cmath> // vaaditaan
#include <iostream>

using namespace std;

int main()
{
    double num{};

    cout << "Anna numero (double): ";
    cin >> num;

    cout << num << ":n neliojuuri on: " << sqrt(num) << endl;
    cout << num << ":n kuutijoitu juuri on: " << cbrt(num) << endl;

    cout << num << ":n sin-arvo on: " << sin(num) << endl;
    cout << num << ":n cos-arvo on: " << cos(num) << endl;

    cout << num << ":n ceil-arvo on: " << ceil(num) << endl;
    cout << num << ":n floor-arvo on: " << floor(num) << endl;
    cout << num << ":n round-arvo on: " << round(num) << endl;

    double potenssi{};
    cout << "\nAnna numerolle " << num << " arvo, jolla korotetaan potenssiin: ";
    cin >> potenssi;
    cout << num << ":n potenssiarvo " << potenssi << " on: " << pow(num, potenssi) << endl;

    return 0;
}
