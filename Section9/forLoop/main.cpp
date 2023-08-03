// 83. for Loop
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{

    vector<string> sanat = { "eka sana", "toka sana", "kolmas sana" };
    cout << "Sanat: ";
    for(unsigned i = 0; i < sanat.size(); i++) {
        cout << sanat[i] << " ";
    }

    cout << "Toimii" << endl;
    cout << "========================================\n" << endl;

    for(int i{ 1 }; i <= 100; i++) {
        if(i < 10) {
            cout << "0" << i << ((i % 10 == 0) ? "\n" : " ");
        } else {
            cout << i << ((i % 10 == 0) ? "\n" : " ");
        }
    }

    return 0;
}
