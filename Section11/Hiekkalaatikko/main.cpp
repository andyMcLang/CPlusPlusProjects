#include <iostream>
#include <string>

using namespace std;

double laske_verollinen_hinta(double alkuhinta, double vero, double toimituskulut);

double laske_verollinen_hinta(double alkuhinta, double vero = 0.07, double toimituskulut = 3.5)
{
    return alkuhinta += (alkuhinta * vero) + toimituskulut;
}

int main()
{
    double tuotteen_hinta{};
    tuotteen_hinta = laske_verollinen_hinta(100);

    cout << "Tuotteen verollinen hinta: " << tuotteen_hinta;

    return 0;
}
