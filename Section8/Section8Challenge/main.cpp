#include <iostream>

using namespace std;

int main()
{
    int maara{ 0 };
    int balanssi{ 0 };

    cout << "Enter an amount in cents : ";
    cin >> maara;

    int dollar_value{ 100 };
    int quarter_value{ 25 };
    int dime_value{ 10 };
    int nickel_value{ 5 };
    int penny_value{ 1 };

    int dollars{ 0 };
    int quarters{ 0 };
    int dimes{ 0 };
    int nickels{ 0 };
    int pennies{ 0 };

    // ratkaisu vaihtoehto 1:
    /*
        while(maara > 0) {
            if(maara >= dollar_value) {
                maara -= dollar_value;
                dollars++;
            } else if(maara >= quarter_value) {
                maara -= quarter_value;
                quarters++;
            } else if(maara >= dime_value) {
                maara -= dime_value;
                dimes++;
            } else if(maara >= nickel_value) {
                maara -= nickel_value;
                nickels++;
            } else {
                maara -= penny_value;
                pennies++;
            }
        }
    */
    // ratkaisu vaihtoehto 2:
    /*
        dollars = maara / dollar_value;
        balanssi = maara - (dollars * dollar_value);

        quarters = balanssi / quarter_value;
        balanssi -= quarters * quarter_value;

        dimes = balanssi / dime_value;
        balanssi -= dimes * dime_value;

        nickels = balanssi / nickel_value;
        balanssi -= nickels * nickel_value;

        pennies = balanssi / penny_value;
        balanssi -= pennies * penny_value;
    */

    // ratkaisu vaihtoehto 3: (jakojäännös)
    dollars = maara / dollar_value;
    cout << "maara / dollar_value = " << dollars << " dollars." << endl;
    balanssi = maara % dollar_value;
    cout << "maara % dollar_value = " << balanssi << " balanssi." << endl;
    
    

    cout << "\ndollars : " << dollars << "\nquarters : " << quarters << "\ndimes : " << dimes << "\nnickels : " << nickels
         << "\npennies : " << pennies << "\nbalanssiin jai: " << balanssi << endl;

    return 0;
}
