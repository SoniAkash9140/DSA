// map-> unique key and values in sorted order. It contains {key,values}
#include <bits/stdc++.h>
using namespace std;

void explainMap() {
    map<int, int> mpp;

    mpp[1] = 2;
    mpp.emplace(3, 1);
    mpp.insert({2, 4});

    cout << "Map elements:" << endl;
    for (auto it : mpp) {
        cout << it.first << " " << it.second << endl;
    }

    cout << "Value at key 1: " << mpp[1] << endl;
    cout << "Value at key 5 (default): " << mpp[5] << endl;

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
#include <bits/stdc++.h>
using namespace std;

void explainMap() {
    // declare a map (unique keys, sorted order)
    map<int, int> mpp;

    // insert values
    mpp[1] = 2;          // key=1, value=2
    mpp.emplace(3, 1);   // key=3, value=1
    mpp.insert({2, 4});  // key=2, value=4

    // iterate
    cout << "Map elements:" << endl;
    for (auto it : mpp) {
        cout << it.first << " " << it.second << endl;
    }

    // access
    cout << "Value at key 1: " << mpp[1] << endl;

    // if key not present → default value (0)
    cout << "Value at key 5 (default): " << mpp[5] << endl;

    // find an element
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