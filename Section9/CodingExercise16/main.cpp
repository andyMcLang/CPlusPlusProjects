/*
While loop exercise
Given a vector of integers, 
determine how many integers are present before you see the value -99 . 
Note, it's possible -99  is not in the vector! 
If -99  is not in the vector then the result will be equal to the number of elements in the vector.

The final result should be stored in an integer variable named count .

Note that you the different vectors will be tested against your code. 
You do not need to declare the vector of integers. 
vec  is the name of the vector you should use.
 */ 

#include <iostream>
#include <vector>
using namespace std;

int count_numbers(const vector<int> &vec) {
    //---- WRITE YOUR CODE BELOW THIS LINE----
    int count {0};
    size_t index {0};
    
    while (index < vec.size() && vec.at(index) != -99) {
        count++;
        index++;
    }
    
    //---- WRITE YOUR CODE ABOVE THIS LINE----
    //---- DO NOT MODIFY THE CODE BELOW THIS LINE-----
    return count;
}

int main() {
    
    vector<int> vec {10, 20, 30, 40, 50, -99, 60, 70, 80};
    int result = count_numbers(vec);
    
    cout << "Number of integers before -99: " << result << endl;
    
    return 0;
}