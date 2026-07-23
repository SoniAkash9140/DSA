#include<bits/stdc++.h>
using namespace std;
int main(){
    int a , b, c , d;
    cin>> a >> b >> c >> d ;
    unordered_set<int> st;
    for(int i=a; i<=b; i++){
        st.insert(i);
    }
    for(int i=c; i<=d; i++){
        st.insert(i);
    }
    cout<<st.size()<<endl;
    return 0;
}