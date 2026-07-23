#include<bits/stdc++.h>
using namespace std;

int sumFn (int n){
    int sum=0;
    while(n){
        sum+=n%10;
        n=n/10;
    }
    return sum;
}

int main(){
    int s , e ;
    cin>>s>>e;
    int sum=0;
    int count=0;
    for(int i=s; i<e; i++){
        if((i)%3==0 && sumFn(i)%2==0) count++;
    }
    cout<<count<<endl;
    return 0;
}