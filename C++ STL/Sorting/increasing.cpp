#include <iostream>
#include <vector>
#include <algorithm>  // For std::sort

int main() {
    std::vector<int> v = {5, 2, 8, 1, 3};

    // Sorting in ascending order (default behavior)
    std::sort(v.begin(), v.end());

    for (int num : v) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
