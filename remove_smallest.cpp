#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
        vector<int> vec = {1, 2, 3, 4, 5};
    int elementToDelete = 3; // The element you want to delete

    // Find the index of the element to delete
    auto it = find(vec.begin(), vec.end(), elementToDelete);

    // Check if the element was found
    if (it != vec.end()) {
        // Erase the element from the vector
        vec.erase(it);

        // Print the updated vector
        for (const auto& num : vec) {
            cout << num << " ";
        }
    } else {
        cout << "Element not found in the vector." << endl;
    }



    return 0;
}
