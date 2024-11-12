#include <iostream>
#include <vector>
#include <algorithm>  // For std::sort

int main() {
    std::vector<int> v = {5, 2, 8, 1, 3};

    // Sorting in descending order using a lambda function
    std::sort(v.begin(), v.end(), [](int a, int b) {
        return a > b;  // Change the comparison for descending order
    });

    for (int num : v) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
