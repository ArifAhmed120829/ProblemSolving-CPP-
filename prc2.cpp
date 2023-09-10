#include <iostream>

int main() {
    const int numArrays = 3; // Number of arrays
    const int arraySize = 5; // Size of each array

    // Create an array of pointers to arrays
    int* arrayOfPointers[numArrays];

    // Dynamically allocate memory for each array
    for (int i = 0; i < numArrays; i++) {
        arrayOfPointers[i] = new int[arraySize];

        // Initialize the arrays
        for (int j = 0; j < arraySize; j++) {
            arrayOfPointers[i][j] = i * 10 + j; // Example initialization
        }
    }

    // Access and use the arrays
    for (int i = 0; i < numArrays; i++) {
        std::cout << "Array " << i << ": ";
        for (int j = 0; j < arraySize; j++) {
            std::cout << arrayOfPointers[i][j] << " ";
        }
        std::cout << std::endl;
    }

    // Deallocate memory for each array
    for (int i = 0; i < numArrays; i++) {
        delete[] arrayOfPointers[i];
    }

    return 0;
}
