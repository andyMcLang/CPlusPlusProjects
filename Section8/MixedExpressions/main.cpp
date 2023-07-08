// Section 8
// Mixed Type Expressions
/*
 * Ask the user to enter 3 integers
 * Calculate the sum of the integers then
 * calculate the average of the integers.
 *
 * Display the 3 integers entered
 * the sum of the 3 integers and
 * the average of the 3 integers
 */

#include <iostream>

using namespace std;

int main()
{
    int total{};
    int num1{}, num2{}, num3{};
    const int count{ 3 };

    cout << "Give 3 numbers please: ";
    cin >> num1 >> num2 >> num3;
    total = num1 + num2 + num3;
    
    double average {0.0};
    average = static_cast<double>(total)/count;
    // average = (double)total/count; // Old-style
    
    cout << "All 3 numberers sum is: " << total << " and average is " << average << endl;

    return 0;
}
