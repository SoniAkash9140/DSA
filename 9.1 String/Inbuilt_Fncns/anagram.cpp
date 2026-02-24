//ANAGRAM-Same Letters and count of letters .

#include<bits/stdc++.h>
using namespace std;
bool isAnagram(string s1 , string s2){
    //create freq. array
    vector<int> freq(26,0);

    //for anagram the length should be same foe s1 and s2
    if(s1.length()!=s2.length()){
        return false;
    }

    //store freq. of char. in s1,s2
    for(int i=0; i<s1.length(); i++){
        freq[s1[i]-'a']++; //for s1 , we increment the feeq. of char
        freq[s2[i]-'a']--; //for s2 , we decrement the freq of char
    }

    //chacking if freq. of every char is 0
    for(int i=0; i<26; i++){
        if(freq[i]!=0){
            return false;
        }
    }
    return true;
}

int main(){
    string s1 , s2;
    cin>>s1>>s2;
    if (isAnagram(s1 , s2)){
        cout<<"Anagram"<<endl;
    } else{
        cout<<"Not Anagram" << endl;
    }
    return 0;
}