// 81. Conditional Operator
// Conditional Operator
#include <iostream>

using namespace std;

int main()
{
    int num1{}, num2{};

    cout << "Anna kaksi numeroa perakkain: ";
    cin >> num1 >> num2;

    if(num1 != num2) {
        cout << "Suurin numero on: " << (num1 > num2 ? num1 : num2) << endl;
        cout << "Pienin numero on: " << (num1 < num2 ? num1 : num2) << endl;
    } else {
        cout << "Annoit samanarvoiset numerot!" << endl;
    }

    return 0;
}