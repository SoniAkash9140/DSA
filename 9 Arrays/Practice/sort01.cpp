#include<iostream>
using namespace std;

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sortOne(int arr[], int n) {
    int left = 0, right = n - 1;
    while (left < right) {
        // Move the left pointer until you find a 1
        while (arr[left] == 0 && left < right) {
            left++;
        }

        // Move the right pointer until you find a 0
        while (arr[right] == 1 && left < right) {
            right--;
        }

        // Swap if left is less than right
        if (left < right) {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}

int main() {
    int arr[] = {1, 0, 1, 0, 1, 0, 0, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Original Array: ";
    printArray(arr, n);

    sortOne(arr, n);

    cout << "Sorted Array: ";
    printArray(arr, n);

    return 0;
}
