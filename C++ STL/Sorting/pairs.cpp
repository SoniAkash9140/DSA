//std::vector<std::pair>
#include <iostream>
#include <vector>
#include <algorithm>  // For std::sort
#include <utility>    // For std::pair

int main() {
    std::vector<std::pair<int, int>> v = {{1, 5}, {3, 2}, {2, 8}, {4, 1}};

    // Sorting based on the first element of the pair
    std::sort(v.begin(), v.end(), [](const std::pair<int, int>& a, const std::pair<int, int>& b) {
        return a.first < b.first;
    });

    for (auto& p : v) {
        std::cout << "(" << p.first << ", " << p.second << ") ";
    }
    std::cout << std::endl;

    return 0;
}


//output-> (1, 5) (2, 8) (3, 2) (4, 1)
