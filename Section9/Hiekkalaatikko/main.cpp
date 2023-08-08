#include <iostream>

using namespace std;

int main()
{
    int i{ 1 };

    while(i <= 10) {
        if(i % 2 == 0)
            cout << i << endl;
        ++i;
    }

    cout << "\n==================================\n";

    int scores[]{ 100, 90, 87 };
    i = 0;

    while(i < sizeof(scores) / sizeof(scores[0])) {
        cout << scores[i] << endl;
        ++i;
    }

    cout << "\n==================================\n";

    int number{ 0 };
    bool done{ false };
    cout << "anna numero 5 ja 9 välillä: ";

    while(!done) {

        cin >> number;
        if(number < 5 || number > 9) {
            cout << "Toistan:anna numero 5 ja 9 välillä: ";
        } else {
            done = true;
        }
    }

    cout << "Syottamasi numero on: " << number << endl;

    cout << "\n==================================\n";

    return 0;
}
