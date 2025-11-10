#include <iostream>
#include <vector>
#include <algorithm>  // For std::sort
using namespace std;

int main() {
    vector<int> v = {5, 2, 8, 1, 3};

    // Sorting in ascending order (default behavior)
    sort(v.begin(), v.end());

    for (int num : v) {
        cout << num << " ";
    }
    cout << std::endl;

    return 0;
}
