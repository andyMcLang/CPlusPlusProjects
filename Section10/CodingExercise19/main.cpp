#include <iostream>
#include <string>
using namespace std;

void cpp_strings()
{

    string unformatted_full_name{ "StephenHawking" };

    //----DO NOT MODIFY THE CODE ABOVE THIS LINE----
    //----WRITE YOUR CODE BELOW THIS LINE----
    string first_name = unformatted_full_name.substr(0, 7);
    string last_name = unformatted_full_name.substr(7);
    string formatted_full_name = first_name + " " + last_name;

    //----WRITE YOUR CODE ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----

    cout << formatted_full_name;
}

int main() {
    cpp_strings();
    
    return 0;
}