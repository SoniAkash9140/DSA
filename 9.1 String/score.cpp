#include<bits/stdc++.h>
using namespace std;

int scoreStr(string str){
    int ans=0;
    for(int i=0; i<str.length()-1; i++){
        int sub=(str[i]-str[i+1]);

        if(sub<0){
            sub=sub*-1;
        }
        ans+=sub;
    }
    return ans;
}
int main(){
    string str;
    cin>>str;

    cout<<"Score of the String is = " << scoreStr(str) << endl;
    return 0;
}