#include<iostream>
#include<string>
using namespace std;

int main() {

	setlocale(LC_ALL, "fi_FI.UTF-8");

	string syote;

	cout << "Kirjoita: ";

	getline(cin, syote);

	cout << "ÅÄÖ åäö. Kirjoitit: " << syote << endl;

	system("pause");
	return 0;
}