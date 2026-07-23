#include <bits/stdc++.h>
using namespace std;
bool fun(int n){
    if(n<0) return true;

    int prev=n%10;
    n=n/10;

    while(n){
        int next=n%10 ;
        n=n/10;
        if(abs(next-prev)!=1) return false;
        prev=next;
    }
    return true;
}