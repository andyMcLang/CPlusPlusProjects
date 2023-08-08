// 84. range-based for Loop

#include <iostream>
#include <vector>

using namespace std;

int keskiArvoLaskin()
{
    double keskiarvo{};
    double summa{};

    vector<double> numerot{};

    for(auto numero : numerot) {
        cout << numero << " ";
        summa += numero;
    }
    cout << "summa: " << summa << endl;

    keskiarvo = summa / numerot.size();

    if(numerot.size() != 0)
        cout << "keskiarvo: " << keskiarvo << endl;

    return 0;
}

int kirjainTulostus() {
    
    for (auto c: "kylmalaite auttaa viilentymaan!")
        if (c == ' ') {
            cout << "\t";
        } else {
            cout << c;
        }
    
    return 0;
}

int main()
{
    keskiArvoLaskin();
    kirjainTulostus();

    return 0;
}
