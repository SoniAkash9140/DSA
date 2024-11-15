#include<bits/stdc++.h>
using namespace std;
int count (int n){
    int cnt =(int)(log10(n) +1);
    return cnt;
}
int main(){
    int k=count(58586);
    cout << k ;
    return 0;
}