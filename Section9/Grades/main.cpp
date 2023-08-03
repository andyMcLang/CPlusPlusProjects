#include <iostream>

using namespace std;

int main()
{
    int pisteet{ 0 };
    char arvosana{};

    cout << "Anna pistemaarasi: ";
    cin >> pisteet;

    if(pisteet >= 0 && pisteet <= 100) {
        if(pisteet >= 90) {
            arvosana = 'A';
        } else if(pisteet >= 80) {
            arvosana = 'B';
        } else if(pisteet >= 70) {
            arvosana = 'C';
        } else if(pisteet >= 60) {
            arvosana = 'D';
        } else if(pisteet >= 50) {
            arvosana = 'E';
        } else {
            arvosana = 'F';
        }
    } else {
        cout << "Annoit arvoksi 1-00 ulkopuolella!" << endl;
    }
    cout << "Arvosanaksi tuli siis: " << arvosana << endl;
    if(arvosana == 'F') {
        cout << "Et nyt valitettavasti paassyt lapi!" << endl;
    } else {
        cout << "Onneksi olkoon Suomenmaa, hiiala hiiala hoi!" << endl;
    }

    return 0;
}
