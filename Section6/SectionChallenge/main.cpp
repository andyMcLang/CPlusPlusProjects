#include <iostream>
#include <locale>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL, "fi_FI.UTF-8");

    int smallRooms{ 0 };
    int largeRooms{ 0 };
    const double smallRoomPrice{ 25 };
    const double largeRoomPrice{ 35 };
    const double taxProsent{ 0.06 };
    const int tarjousVoimassa{ 30 };

    cout << "Kui monta pienta huonetta otat? : ";
    cin >> smallRooms;

    cout << "Kui monta isoa huonetta otat? : ";
    cin >> largeRooms;

    double cost = (smallRooms * smallRoomPrice) + (largeRooms * largeRoomPrice);
    double tax = taxProsent * cost;
    double costTotal = cost + tax;
    cout << "Tama lysti maksaa sitten yhteensa: " << cost << "e" << endl;
    cout << "Veroa: " << tax << "e" << endl;
    cout << "============================" << endl;
    cout << "Yhteensa: " << costTotal << "e" << endl;
    cout << "Tarjous voimassa " << tarjousVoimassa << " asti." << endl;

    return 0;
}
