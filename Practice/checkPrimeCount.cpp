#include <bits/stdc++.h>
using namespace std;

// Function to check Prime
bool isPrime(int n)
{
    if (n <= 1)
        return false;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

// Function to check whether digit sum is even
bool evenDigitSum(int n)
{
    int sum = 0;

    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }

    return sum % 2 == 0;
}

int main()
{
    int s, e;
    cin >> s >> e;

    int count = 0;

    for (int i = s; i <= e; i++)
    {
        if (isPrime(i) && evenDigitSum(i))
        {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}