//ANAGRAM-Same Letters and count of letters .

#include<bits/stdc++.h>
using namespace std;


/////////////Method-1//////////(By Sorting)
// string longestCommonPrefix(vector<string> &str){
//     //sort the string 
//     sort(str.begin() , str.end());

//     //take starting and last string 
//     string s1=str[0];
//     int i=0;
//     string s2=str[str.size()-1];
//     int j=0;

//     //now compare the first and last string of common prefix 
//     string ans="";
//     while (i<s1.size() && j<s2.size()){
//         if(s1[i]==s2[j]){
//             ans+=s1[i];
//             i++;
//             j++;
//         }
//         else{
//             break;
//         }
//     }
//     return ans ;
// }

// int main(){
//     int n;
//     cout<<"enter n"<<endl;
//     cin>>n;
//     vector<string>str(n);
//     for(int i=0; i<n; i++){
//         cin>>str[i];
//     }

//     cout<<"Longest Common Prefix"<<" "<<longestCommonPrefix(str)<<endl;
//     return 0;
// }



//////////Method-2/////////////(Without Sorting)

string longestCommonPrefix(vector<string> &str){
    //keeping first string constant and compairing it with all other strings 
    string s1=str[0];
    int ans_length=s1.size();
    for(int i=0; i<str.size(); i++){
        int j=0;
        while(j<s1.size()&&j<str[i].size() && s1[j]==str[i][j]) //updating length of an array
        j++;

        ans_length=min(ans_length,j);
    }
    string ans=s1.substr(0,ans_length);
    return ans;
}

int main(){
    int n;
    cout<<"Enter n" << endl;
    cin>>n;
    vector<string>str(n);
    for(int i=0; i<n; i++){
        cin>>str[i];
    }
    cout<<"Longest Common Prefix = " << longestCommonPrefix(str) << endl;
    return 0;
}
