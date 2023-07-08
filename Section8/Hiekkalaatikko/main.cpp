#include <iostream>

using namespace std;

int main()
{
    int num1{}, num2{};

    cout << "Anna 2 numeroa peräkkäin :";
    cin >> num1 >> num2;
    
    if (num1 == num2) {
        cout << "numero1 ja numero2 ovat siis samanarvoisia!" << endl;
    } else {
        cout << "numerot ei oo siis samanarvoisia, mut ei se mitään, testaan vaan.." << endl;
    }

    return 0;
}
