#include <iostream>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int index_to_remove = 2; // Index of the item to remove

    if (index_to_remove >= 0 && index_to_remove < size) {
        for (int i = index_to_remove; i < size - 1; i++) {
            arr[i] = arr[i + 1]; // Shift elements to the left
        }
        size--; // Reduce the size of the array

        // Print the updated array
        for (int i = 0; i < size; ++i) {
            std::cout << arr[i] << " ";
        }


        std::cout << std::endl;
        int size2 = sizeof(arr) / sizeof(arr[0]);

         std::cout<<size2 << std::endl;
    } else {
        std::cout << "Invalid index to remove." << std::endl;
    }

    return 0;
}
