#include <bits/stdc++.h>
using namespace std;

void explainMap() {
    // Use a single map declaration
    map<int, int> mpp;

    // Adding key-value pairs to the map
    mpp[1] = 2;
    mpp.emplace(3, 1);
    mpp.insert({2, 4});

    // Iterating over the map
    for (auto it : mpp) {
        cout << it.first << " " << it.second << endl;
    }

    // Accessing elements
    cout << "Value at key 1: " << mpp[1] << endl;

    // Attempting to access a non-existent key
    cout << "Value at key 5 (default): " << mpp[5] << endl;

    // Finding elements in the map
    auto it = mpp.find(3);
    if (it != mpp.end()) {
        cout << "Found key 3 with value: " << it->second << endl;
    } else {
        cout << "Key 3 not found" << endl;
    }

    it = mpp.find(5);
    if (it != mpp.end()) {
        cout << "Found key 5 with value: " << it->second << endl;
    } else {
        cout << "Key 5 not found" << endl;
    }
}

int main() {
    explainMap();
    return 0;
}
