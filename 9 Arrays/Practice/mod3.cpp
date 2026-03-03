#include<bits/stdc++.h>
using namespace std;

int rangeVal(int s , int e){
    int count=0;
    for(int i=s; i<=e; i++){
        if(i%3==0){
            int sum=0 , temp=i;
            while(temp>0){
                sum+=temp%10;
                temp/=10;
            } 
            if(sum%2==0){
                count++;
            }
        }
    }
    return count;
}

int main(){
    int a , b;
    cin>>a>>b;

    cout<<rangeVal(a,b)<<endl;
}