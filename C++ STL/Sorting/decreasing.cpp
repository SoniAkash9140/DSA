#include <iostream>
#include <vector>
#include <algorithm>  // For std::sort
using namespace std;

int main() {
    vector<int> v = {5, 2, 8, 1, 3};

    // Sorting in descending order using a lambda function
    sort(v.begin(), v.end(), [](int a, int b) {
        return a > b;  // Change the comparison for descending order
    });

    for (int num : v) {
        cout << num << " ";
    }
    cout <<endl;

    return 0;
}
