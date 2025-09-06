#include<bits/stdc++.h>
using namespace std;
int arr[]={2,3,4,5,6,7,8,9};
int n=arr.size();
int target=7;
for(int i=0; i<n; i++){
    if(arr[i]==target){
        cout<< i << endl;
    }
}
