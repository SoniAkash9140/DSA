#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cout << "Enter N: \n";
    cin >> N;
    int dub = N;  // Store the original value of N
    int sum = 0;
    
    while (N > 0) {
        int ld = N % 10;
        sum = sum + (ld * ld * ld);
        N = N / 10;
    }
    
    if (sum == dub) {  // Compare sum with the original number
        cout << "YES";
    } else {
        cout << "NO";
    }
    
    return 0;
}
