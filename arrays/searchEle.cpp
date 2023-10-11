// Problem Statement:

// Given an integer array and a target integer, return the index of the target element if it exists in the array; otherwise, return -1. You may assume that each input would have exactly one solution, and you may not use the same element twice.

#include <iostream>
using namespace std;

int main() {
    int n, x, ele = -1; // Initialize ele to -1, indicating not found
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int array[n];  // Declare an array of size 'n'

    cout << "Enter " << n << " integers separated by spaces: ";
    for (int i = 0; i < n; i++) {
        cin >> array[i];  // Read each element one by one
    }

    cout << "Enter the element you want to find: ";
    cin >> x;
    
    for (int i = 0; i < n; i++) {
        if (array[i] == x) {
            ele = i; // Store the index when the element is found
            break;   // Exit the loop once the element is found
        }
    }

    if (ele != -1) {
        cout << "The element is present at index no: " << ele << endl;
    } else {
        cout << "The element is not found in the array." << endl;
    }

    return 0;
}
