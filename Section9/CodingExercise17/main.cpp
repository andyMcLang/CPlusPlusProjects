/*
 Nested Loops - Sum of the Product of all Pairs of Vector Elements
Given a vector of integers named vec  that is provided for you,
find the sum of the product of all pairs of vector elements.
You should declare an integer variable named result
and store the final product in this variable.

For example, given the vector  vec  to be {1, 2 , 3} ,
the possible pairs are (1,2), (1,3), and (2,3) .
So the result would be (1*2) + (1*3) + (2*3)  which is 11 .

Another example:
Given the vector vec  to be {2, 4, 6, 8} ,
the possible pairs are (2,4), (2,6), (2,8), (4,6), (4,8), and (6,8) .
So the result would be (2*4) + (2*6) + (2*8) + (4*6) + (4*8) + (6*8) which is 140 .

If the vector is empty or has only 1  element then the result  should be 0 .
 */

#include <iostream>
#include <vector>

using namespace std;

int calculate_pairs(vector<int> vec)
{
    //----WRITE YOUR CODE BELOW THIS LINE----
    int result{};

    for(size_t i = 0; i < vec.size(); i++) {
        for(size_t j = i + 1; j < vec.size(); j++) {
            result += vec[i] * vec[j];
        }
    }

    //----WRITE YOUR CODE ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
    return result;
}

int main()
{
    std::vector<int> vec1 = { 1, 2, 3 };
    int result1 = calculate_pairs(vec1);
    std::cout << "Result 1: " << result1 << std::endl; // Output: 11

    std::vector<int> vec2 = { 2, 4, 6, 8 };
    int result2 = calculate_pairs(vec2);
    std::cout << "Result 2: " << result2 << std::endl; // Output: 140

    std::vector<int> vec3 = { 2468 };
    int result3 = calculate_pairs(vec3);
    std::cout << "Result 3: " << result3 << std::endl; // Output: 0
    return 0;
}
