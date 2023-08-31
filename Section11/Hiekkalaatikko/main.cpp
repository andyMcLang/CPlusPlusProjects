#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

void skaalattuNumero(int& num);

int main()
{
    int num = 77;
    skaalattuNumero(num);
    cout << num << endl;

    num = 1000;
    skaalattuNumero(num);
    cout << num << endl;

    return 0;
}

void skaalattuNumero(int& num)
{
    if(num > 100) {
        num = 100;
    }
}