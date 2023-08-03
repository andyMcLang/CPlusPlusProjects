// 80. switch-case Statement
// Switch Statement

/*
 * Kysy käyttäjältä, mitä arvosanaa hän odottaa kokeesta ja
 * kerro hänelle, mitä hänen on saatava saadakseen sen.
 */

#include <iostream>

using namespace std;

int main()
{
    char arvosana{};

    cout << "Minka arvosanat haluaisit tavoitella? : ";
    cin >> arvosana;

    switch(arvosana) {
    case 'a':
    case 'A':
        cout << "Sun pitaisi saada 90 pistetta tai enemman!" << endl;
        break;
    case 'b':
    case 'B':
        cout << "Sun pitaisi saada 80-89 pistetta!" << endl;
        break;
    case 'c':
    case 'C':
        cout << "Sun pitaisi saada 70-79 pistetta!" << endl;
        break;
    case 'd':
    case 'D':
        cout << "Sun pitaisi saada 60-69 pistetta!" << endl;
        break;
    case 'e':
    case 'E':
        cout << "Sun pitaisi saada 50-59 pistetta!" << endl;
        break;
    case 'f':
    case 'F': {
        char valinta{};
        cout << "Haluatko tosiaan F arvosanaksi? Vastaa (K/E) : ";
        cin >> valinta;

        if(valinta == 'k' || valinta == 'K')
            cout << "No jumankauta, motivoiko edes opiskelu?" << endl;
        else if(valinta == 'e' || valinta == 'E')
            cout << "No sit hyva juttu, opiskelu kannattaa!" << endl;
        else
            cout << "Et vastanut K tai E kirjaimella!" << endl;

        break;
    }
    default:
        cout << "No siis.. et valinnut mitaan noista kirjaimista A-F valilla?" << endl;
    }

    return 0;
}
