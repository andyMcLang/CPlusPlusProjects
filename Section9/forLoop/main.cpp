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
    
    cout << "\n========================================\n" << endl;
    cout << "vector<int> unsigned inst test:" << endl;
    
    vector<int> nums {10,20,30,40,50};
    
    for (unsigned i {0}; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }

    return 0;
}
