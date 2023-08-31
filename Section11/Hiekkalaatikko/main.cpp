#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

// Function prototypes
void print_guest_list(const string guest_list[], size_t guest_list_size);
void clear_guest_list(string guest_list[], size_t guest_list_size);

void event_guest_list()
{
    string guest_list[] = { "Larry", "Moe", "Curly" };
    size_t guest_list_size = 3;

    // Print initial guest list
    print_guest_list(guest_list, guest_list_size);

    // Clear guest list
    clear_guest_list(guest_list, guest_list_size);

    // Print guest list after clearing
    print_guest_list(guest_list, guest_list_size);
}

// Function to print the guest list
void print_guest_list(const string guest_list[], size_t guest_list_size)
{
    for(size_t i = 0; i < guest_list_size; ++i) {
        cout << guest_list[i] << endl;
    }
    cout << endl;
}

// Function to clear the guest list
void clear_guest_list(string guest_list[], size_t guest_list_size)
{
    for(size_t i = 0; i < guest_list_size; ++i) {
        guest_list[i] = " ";
    }
}

int main()
{
    event_guest_list();
    return 0;
}
