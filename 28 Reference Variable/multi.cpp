#include <iostream>
using namespace std;

int main() {
    // 5 integers ke liye dynamic memory allocation
    int* ptr = new int[5];

    // Memory ka use
    for(int i = 0; i < 5; i++) {
        ptr[i] = i * 10;
    }

    // Output
    for(int i = 0; i < 5; i++) {
        cout << ptr[i] << " ";
    }

    // Memory free karna (important)
    delete[] ptr;

    return 0;
}
