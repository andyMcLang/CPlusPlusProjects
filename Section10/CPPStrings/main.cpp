#include <iomanip>
#include <iostream>
#include <string> // important!

using namespace std;

string kaannaToisinpain(const string& sana)
{
    string kaannetty = " ";

    for(int i = sana.length() - 1; i >= 0; i--) {
        kaannetty += sana[i];
    }

    return kaannetty;
}

int main()
{
    string s0;
    string s1{ "Apple" };
    string s2{ "Banana" };
    string s3{ "Kiwi" };
    string s4{ "apple" };
    string s5{ s1 };       // Apple
    string s6{ s1, 0, 3 }; // App
    string s7{ 10, 'X' };  // XXXXXXXXXX

    cout << s0 << endl;          // No garbage
    cout << s0.length() << endl; // empty string

    cout << s5 << endl;
    s1 = { "Omena" };
    cout << s5 << endl;
    cout << s1 << endl;

    string annettuSana{};

    cout << "Anna joku sana: ";
    getline(cin, annettuSana);

    string kaannettySana = kaannaToisinpain(annettuSana);

    cout << "Tulostetaan sana: " << annettuSana << " ja kaannetaan se: " << kaannettySana << endl;

    string viimeisinKirjain{ "" };

    int i = s4.length() - 1;

    viimeisinKirjain += s4[i];

    cout << "Sanan " << s4 << " viimeisin kirjain on " << viimeisinKirjain << endl;

    return 0;
}
