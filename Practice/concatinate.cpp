#include<bits/stdc++.h>
using namespace std;

int sumFn(int n){
    int sum = 0;
    while(n){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int singleFn(int n){
    if(n == 0) return 0;
    if(n % 9 == 0) return 9;
    return n % 9;
}

int main(){
    int N, K;
    cin >> N >> K;

    int digitSum = sumFn(N);
    int total = digitSum * K;
    cout << singleFn(total);
    return 0;
}