#include <iostream>

using namespace std;

int main()
{
    int favNumber;
    cout << "Type your favorite number: ";
    cin >> favNumber;

    if(favNumber == 6) {
        cout << "OMG! Your typing number " << favNumber << " is my favorite number too!" << endl;
    } else {

        cout << "Your number iiiiiis: " << favNumber << " but its not my favorite number!" << endl;
    }

    return 0;
}