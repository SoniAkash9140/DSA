#include <iostream>
#include <algorithm>  // For std::sort

int main() {
    int arr[] = {5, 2, 8, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Sorting the array in ascending order
    std::sort(arr, arr + n);

    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

//output-> 1 2 3 4 5 8