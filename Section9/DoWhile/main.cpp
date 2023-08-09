// 86. do while Loop

#include <iostream>

using namespace std;

int main()
{
    char selection{};

    cout << "Tervetuloa heseen! Valitse tuote:" << endl;
    cout << "1. Hampurilainen" << endl;
    cout << "2. Ranskalaiset" << endl;
    cout << "3. Nugetit" << endl;
    cout << "Q. Lopeta" << endl;

    do {
        cin >> selection;

        if(selection == '1')
            cout << "Valitsit 1. Hampurilainen\n";
        else if(selection == '2')
            cout << "Valitsit 2. Ranskalaiset\n";
        else if(selection == '3')
            cout << "Valitsit 3. Nugetit\n";
        else if(selection == 'q' || selection == 'Q')
            cout << "Heippa!" << endl;
        else
            cout << "Kokeillepas uudestaan valita valikosta ne kirjaimet: ";

    } while(selection != 'q' && selection != 'Q');

    return 0;
}
