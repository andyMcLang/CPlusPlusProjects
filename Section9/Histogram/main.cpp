// 89. Nested Loops

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int rivienMaara{};
    cout << "Montako datan sisaltoa haluat: ";
    cin >> rivienMaara;

    vector<int> data{};

    for(int i{ 1 }; i <= rivienMaara; i++) {
        int datanSisallonMaara{};
        cout << "Anna " << i << ":n datan sisallon maara: ";
        cin >> datanSisallonMaara;
        data.push_back(datanSisallonMaara);
    }

    for(int tulostus : data) {
        cout << tulostus << endl;
        for(int i{ 1 }; i <= tulostus; i++) {
            if(i % 10 == 0) {
                cout << "*";
            } else {
                cout << "-";
            }
        }
        cout << endl;
    }

    return 0;
}
