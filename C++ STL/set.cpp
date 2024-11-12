//set-> it contains every characters in SORTED and UNIQUE order


#include<bits/stdc++.h>
using namespace std;
void explainSet(){
    set<int> st;
    st.insert(1); // {1}
    st.insert(2);  //{1,2}
    st.insert(2);  //{1,2}
    st.insert(4);   //{1,2,4}
    st.insert(3);    //{1,2,3,4}

    auto it = st.find(3);

    auto it=st.find(6);

    st.erase(5);

    int cnt = st.count(1);

    auto it=st.find(3);
    st.erase(it);

    auto it1=st.find(2);
    auto it2=st.find(3);
    st.erase(it1 , it2);

    auto it =st.lower_bound(2);
    auto it =st.upper_bound(3);
}


void explainMultiSet(){
    multiset<int>ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);

    ms.erase(1); //all 1's erased

    int cnt=ms.count(1);

    //only a single one erased
    ms.erase(ms.find(1));
    
}