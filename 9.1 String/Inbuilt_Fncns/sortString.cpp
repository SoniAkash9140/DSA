#include<bits/stdc++.h>
using namespace std;

string countSort(string str){
    vector<int> freq(26,0);

    //sorting freq. of every char. in string
    for(int i=0; i<str.size(); i++){
        int index=str[i]-'a';
        freq[index]++;
    }

    //create our sorted array
    int j=0;
    for(int i=0; i<26; i++){
        while(freq[i]--){
            str[j++]=i+'a';
        }
    }
    return str;
}
int main(){
    string str;
    cin>>str;

    cout<<countSort(str)<<endl;
}


//tc-O(len of string)
//sc-O(26) = constant;