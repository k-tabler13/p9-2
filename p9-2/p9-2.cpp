// Kiya Tabler array functions that carry out the following tasks for a passed array of integers.  

#include <iostream>
using namespace std; 
// Function to check if the array is sorted in increasing order
bool isSortedIncreasing(const int array[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        if (array[i] > array[i + 1]) {
            return false; 
        }
    }
    return true; 
}

int main() {
    const int SIZE = 5;  
    int array[SIZE];

    // Ask the user to input five integers
    std::cout << "Please enter 5 integers:\n";

    for (int i = 0; i < SIZE; ++i) {
        cout << "Integer #" << i + 1 << ": ";  // Prompt for each integer
        cin >> array[i];
    }

    // Check if the array is sorted in increasing order.
    if (isSortedIncreasing(array, SIZE)) {
        cout << "The array is sorted in increasing order.\n";
    }
    else {
        cout << "The array is not sorted in increasing order.\n";
    }

    return 0;
}


