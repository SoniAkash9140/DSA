#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;

    vector<int> primes;
    int num = 2;

    while (primes.size() < n) {
        if (isPrime(num))
            primes.push_back(num);
        num++;
    }

    int count = 0;
    int i = 0;

    while (count < n) {

        // First prime
        cout << primes[i] << " ";
        count++;
        if (count == n) break;

        // Second prime
        cout << primes[i + 1] << " ";
        count++;
        if (count == n) break;

        // Product
        cout << primes[i] * primes[i + 1] << " ";
        count++;

        i += 2;
    }

    return 0;
}