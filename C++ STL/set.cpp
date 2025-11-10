// set-> it contains every characters in SORTED and UNIQUE order

#include <bits/stdc++.h>
using namespace std;

void explainSet()
{
    set<int> st;
    st.insert(1); // {1}
    st.insert(2); // {1,2}
    st.insert(2); // {1,2}
    st.insert(4); // {1,2,4}
    st.insert(3); // {1,2,3,4}

    auto it = st.find(3);

    // Find element 6 (use different variable name)
    auto it2 = st.find(6);

    st.erase(5);

    int cnt = st.count(1);

    // Find and erase 3 (use different variable name)
    auto it3 = st.find(3);
    st.erase(it3);

    // Find 2 and 3 for range erase
    auto it4 = st.find(2);
    auto it5 = st.find(3);
    st.erase(it4, it5);

    // Lower and upper bound (use different variable names)
    auto it6 = st.lower_bound(2);
    auto it7 = st.upper_bound(3);
}

void explainMultiSet()
{
    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);

    ms.erase(1); // all 1's erased

    int cnt = ms.count(1);

    // only a single one erased
    ms.erase(ms.find(1));
}