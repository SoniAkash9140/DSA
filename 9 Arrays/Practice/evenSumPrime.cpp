#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    //base case
    if(n<=1) return false;

    for(int i=2; i*i<=n; i++){
        if(n%i==0) return false;
    }
    return true;
}

bool digit_sum(int n){
    int sum=0 , t;
    while(n){
        t=n%10;
        n=n/10;
        sum+=t;
    }
    if(sum%2==0) return true;
    return false;
}


int main(){
    int a , b , c=0;
    cin>>a>>b;
    for(int i=a; i<=b; i++){
        if(isPrime(i)){
            if(digit_sum(i)){
                c++;
            }
        }
    }
    cout<<c;
}