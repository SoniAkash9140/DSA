#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >>n;
    int revN=0;
    while(n>0){
        int ld=n%10;
        revN=(revN*10)+ld;
        n=n/10;
    }
   cout << revN;
   return 0;
}