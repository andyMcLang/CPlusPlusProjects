#include <iostream>

using namespace std;

int main()
{
    int maara{ 0 };
    int balanssi{ 0 };
    int dollars{ 0 };
    int quarters{ 0 };
    int dimes{ 0 };
    int nickels{ 0 };
    int pennies{ 0 };

    int dollars_value{ 100 };
    int quarters_value{ 25 };
    int dimes_value{ 10 };
    int nickels_value{ 5 };
    int pennies_value{ 1 };

    cout << "Gimme cents: ";
    cin >> maara;

    dollars = maara / dollars_value;
    balanssi = maara % dollars_value;
    cout << "dollars_value: " << dollars_value << "\ndollars : " << dollars << "\nbalanssi : " << balanssi << endl;

    quarters = balanssi / quarters_value;
    balanssi %= quarters_value;
    cout << "quarters_value: " << quarters_value << "\nquarters : " << quarters << "\nbalanssi : " << balanssi << endl;

    cout << "\nDollars : " << dollars_value << "\nQuarters : " << quarters_value << "\nDimes : " << dimes_value
         << "\nNickels : " << nickels_value << "\nPennies : " << pennies_value << endl;
    return 0;
}
