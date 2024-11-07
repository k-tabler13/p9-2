// Kiya Tabler array functions that carry out the following tasks for a passed array of integers.  

#include <iostream>
#include <unordered_set> 
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

// Function to check if the array is sorted in decreasing order
bool isSortedDecreasing(const int array[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        if (array[i] < array[i + 1]) {
            return false;  
        }
    }
    return true; 
}

// Function to check if the array has adjacent duplicates
bool hasAdjacentDuplicates(const int array[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        if (array[i] == array[i + 1]) {
            return true; 
        }
    }
    return false; 
}

// Function to check if the array has any duplicates 
bool hasDuplicates(const int array[], int size) {

    for (int i = 0; i < size; ++i) {
        if (i == i || array[3] == array[2] || array[4] == array[3]) {
            return true;

        }
        return false;
    }
}

    int main() {
    const int SIZE = 5;
    int array[SIZE];

    // Ask the user to input five integers
    cout << "Please enter 5 integers:\n";
    for (int i = 0; i < SIZE; ++i) {
        cout << "Integer #" << i + 1 << ": ";  // Prompt for each integer
        cin >> array[i];
    }

    // Check if the array is sorted in increasing order
    if (isSortedIncreasing(array, SIZE)) {
        cout << "The data are increasing.\n";
    }
    else {
        cout << "The array is not sorted in increasing order.\n";
    }

    // Check if the array is sorted in decreasing order
    if (isSortedDecreasing(array, SIZE)) {
        cout << "The data is decreasing.\n";
    }
    else {
        cout << "The data are not decreasing.\n";
    }

    // Check if the array has adjacent duplicates
    if (hasAdjacentDuplicates(array, SIZE)) {
        cout << "The data has adjacent duplicates.\n";
    }
    else {
       cout << "The data does not have adjacent duplicates.\n";
    }

    // Check if the array has any duplicates (not necessarily adjacent)
    if (hasDuplicates(array, SIZE)) {
       cout << "The data has duplicates.\n";
    }
    else {
        cout << "The data does not have duplicates.\n";
    }

    return 0;
}




