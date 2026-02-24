//Isomorphic- One-To-One Mapping

#include<bits/stdc++.h>
using namespace std;
bool isIsomorphic(string s1 , string s2){
    //create two vector of size 128 and initialize them by -1. 
    vector<int> v1(128,-1);
    vector<int> v2(128,-1);

    // length should be same foe s1 and s2
    if(s1.length()!=s2.length()){
        return false;
    }

    for(int i=0; i<s1.length(); i++){
        if(v1[s1[i]]!=v2[s2[i]]){ //check if value of char at idx i match in both vectors 
            return false;  
        }
        v1[s1[i]]=v2[s2[i]]=i; //storing string position in vectors for char at idx=i
    }
    return true;   
}

int main(){
    string s1 , s2;
    cin>>s1>>s2;
    if (isIsomorphic(s1 , s2)){
        cout<<"Isomorphic"<<endl;
    } else{
        cout<<"Not Isomorphic" << endl;
    }
    return 0;
}