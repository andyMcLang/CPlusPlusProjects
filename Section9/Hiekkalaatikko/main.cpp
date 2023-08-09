
#include <iostream>
#include <vector>
using namespace std;

int count_numbers(const vector<int>& vec)
{
    //---- WRITE YOUR CODE BELOW THIS LINE----
    int count{ 0 };
    size_t index{ 0 };

    while(index < vec.size() && vec.at(index) != -99) {
        index++;
        count++;
        cout << "index: " << index << endl;
        cout << vec.at(index) << endl;
        cout << endl;
    }

    //---- WRITE YOUR CODE ABOVE THIS LINE----
    //---- DO NOT MODIFY THE CODE BELOW THIS LINE-----
    return count;
}

int main()
{

    vector<int> vec{ 10, 20, 30, 40, 50, -99, 60, 70, 80 };
    int result = count_numbers(vec);

    cout << "Number of integers before -99: " << result << endl;

    return 0;
}
