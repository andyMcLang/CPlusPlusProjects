#include <iostream>
#include <vector>

using namespace std;

int main()
{
    char valinta{};
    vector<int> vektori{};

    do {
        cout << endl;
        cout << "P - Tulosta numerot" << endl;
        cout << "A - Lisaa numero" << endl;
        cout << "M - Nayta numeroitten keskiarvo" << endl;
        cout << "S - Nayta pienin numero" << endl;
        cout << "L - Nayta suurin numero" << endl;
        cout << "Q - Lopeta\n" << endl;
        cout << "Anna valintasi: ";
        cin >> valinta;

        if(valinta == 'P' || valinta == 'p') {
            if(vektori.size() > 0) {
                cout << "[ ";
                for(auto numero : vektori) {
                    cout << numero << " ";
                }
                cout << "]\n";
            } else {
                cout << "[] - lista on tyhja!\n";
            }
        } else if(valinta == 'A' || valinta == 'a') {
            int lisaaNumero{ 0 };
            cout << "Anna numero, mika lisataan listaan: ";
            cin >> lisaaNumero;
            cout << "\nLisasit numeron: " << lisaaNumero << endl;
            vektori.push_back(lisaaNumero);

        } else if(valinta == 'M' || valinta == 'm') {
            int tulos{};
            if(vektori.empty()) {
                cout << "Lista on tyhja!" << endl;
            } else {
                for(auto num : vektori) {
                    tulos += num;
                }
                cout << "Tulos: " << tulos << endl;
                cout << "Numeroitten keskiarvo: " << static_cast<double>(tulos) / vektori.size() << endl;
            }

        } else if(valinta == 'S' || valinta == 's') {
            if(vektori.empty()) {
                cout << "Lista on tyhja!" << endl;
            } else {
                int pieninNumero = vektori.at(0);
                for(auto numero : vektori) {
                    if(numero < pieninNumero) {
                        pieninNumero = numero;
                    }
                }
                cout << "Pienin numero on: " << pieninNumero << endl;
            }
        } else if(valinta == 'L' || valinta == 'l') {
            if(vektori.empty()) {
                cout << "Lista on tyhja!" << endl;
            } else {
                int suurinNumero = vektori[0];
                for(auto numero : vektori) {
                    if(numero > suurinNumero) {
                        suurinNumero = numero;
                    }
                }
                cout << "Suurin numero on: " << suurinNumero << endl;
            }
        }

        else if(valinta == 'Q' || valinta == 'q') {
            cout << "Moikka!" << endl;
        } else {
            cout << "Valitse joku kirjain listalta, niin paaset eteenpain!" << endl;
        }
    } while(valinta != 'q' && valinta != 'Q');

    return 0;
}
