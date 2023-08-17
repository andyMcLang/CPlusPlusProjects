#include <iostream>
#include <string>

using namespace std;

int main()
{
    string alfabeeta{ " abcdefghijklmnopqrstuvxyzABCDEFGHIJKLMNOPQRSTUVXYZ" };
    string avain{ "[XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr" };

    string salainenViesti{};
    string kryptattuViesti{};

    cout << "Anna salainen viestisi: ";
    getline(cin, salainenViesti);

    for(char c : salainenViesti) {
        size_t sijainti = alfabeeta.find(c);
        if(sijainti != string::npos) {
            char uusiChar = avain.at(sijainti);
            kryptattuViesti += uusiChar;
        } else {
            kryptattuViesti += c;
        }
    }

    cout << "kryptattuViesti: " << kryptattuViesti << endl;
    cout << "\n================================================\n";

    string uusiViesti{};
    
    for (char c : kryptattuViesti) {
        size_t sijainti = avain.find(c);
        if(sijainti != string::npos) {
            char uusiChar = alfabeeta.at(sijainti);
            uusiViesti += uusiChar;
        } else {
            uusiViesti += c;
        }
    }
    
    cout << "uusi viesti: " << uusiViesti << endl;
    
    return 0;
}
