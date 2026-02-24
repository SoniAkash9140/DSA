#include<bits/stdc++.h>
using namespace std ;

int longestOnes(string str , int k){
    int s=0;
    int e=0;
    int zero_count=0;
    int max_len=0;

    for(e=0;e<str.length();e++){
        if(str[e]=='0'){
            zero_count++;
        }

        while(zero_count>k){
            if(str[s]=='0') zero_count--;
            s++;
        }
        max_len=max(max_len,e-s+1);
    }
    return max_len;
}

int main(){
    string str;
    cout<<"Enter String";
    cin>>str;

    int k;
    cout<<"Enter max flips:";
    cin>>k;

    cout<<longestOnes(str,k)<<endl;
}