#include <iostream>
using namespace std;

int findUnique(int *arr, int size) {
    int ans = 0;
    for (int i = 0; i < size; i++) {
        ans = ans ^ arr[i]; //XOR operation
    }
    return ans;
}

int main() {
    int arr[] = {2, 4, 3, 2, 4};
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the correct size
    cout << findUnique(arr, size) << endl;  // Call the function and print result
    return 0;
}
