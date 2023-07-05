#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // Declare 2 empty vectors of integers named
    // vector1 and vector 2, respectively.

    vector<int> vector1;
    vector<int> vector2;

    // Add 10 and 20 to vector1 dynamically using push_back

    vector1.push_back(10);
    vector1.push_back(20);

    // Display the elements in vector1 using the at() method as well as its size using the size() method

    cout << "Size of vector1 is: (" << vector1.size() << ") and numbers is: " << endl;

    for(int vector1num : vector1) {
        cout << vector1num << endl;
    }

    cout << "=========================================\n" << endl;

    // Add 100 and 200 to vector2 dynamically using push_back

    vector2.push_back(100);
    vector2.push_back(200);

    cout << "Size of vector2 is: (" << vector2.size() << ") and numbers is: " << endl;

    // Display the elements in vector2 using the at() method as well as its size using the size() method

    for(int vector2num : vector2) {
        cout << vector2num << endl;
    }

    cout << "=========================================\n" << endl;

    // Declare an empty 2D vector called vector_2d
    // Remember, that a 2D vector is a vector of vector<int>

    vector<vector<int>> vector_2d;

    // Add vector1 to vector_2d dynamically using push_back
    // Add vector2 to vector_2d dynamically using push_back

    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    // Display the elements in vector_2d using the at() method

    cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;
    cout << "=========================================\n" << endl;

    // Change vector1.at(0) to 1000

    vector1.at(0) = 1000;

    // Display the elements in vector_2d again using the at() methdod

    cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;
    cout << "=========================================\n" << endl;

    // Display the elements in vector1

    for(int vector1num : vector1) {
        cout << vector1num << endl;
    }

    /*
     * What did you expect?
     * Did you expect to see the 1000 in the vector_2d after you changed vector1?
     */

    return 0;
}
