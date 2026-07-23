#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> prices(n);
    for (int i = 0; i < n; i++)
    {
        cin >> prices[i];
    }

    int minPrice = INT_MAX;
    int maxProfit = 0;

    for (int i = 0; i < n; i++)
    {
        minPrice = min(prices[i], minPrice);
        maxProfit = max(maxProfit, prices[i] - minPrice);
    }
    cout << maxProfit << endl;
    return 0;
}