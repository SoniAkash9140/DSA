#include <iostream>
#include <unordered_map>
using namespace std;

void findDuplicates(int *arr, int size) {
    unordered_map<int, int> freq;

    // Count the frequency of each number
    for (int i = 0; i < size; i++) {
        freq[arr[i]]++;
    }

    // Print all numbers with frequency > 1
    cout << "Duplicate numbers are: ";
    for (auto pair : freq) {
        if (pair.second > 1) {
            cout << pair.first << " ";
        }
    }
    cout << endl;
}

int main() {
    int arr[] = {2, 3, 4, 5, 5, 6, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the correct size
    findDuplicates(arr, size);              // Call the function
    return 0;
}
