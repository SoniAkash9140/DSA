#include<bits/stdc++.h>
using namespace std ;

int maxSubs(string str){
    vector<int>freq(26,0);
    sort(str.begin(),str.end());
    int count=0;
    for(int i=0; i<str.length();i++){
        if(str[i]!=str[i+1]){
            count++;
        }
    }
    return count;
}

int main(){
    string str;
    cin>>str;

    cout<<"Maximum Subs."<<maxSubs(str)<<endl;
}