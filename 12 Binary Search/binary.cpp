#include<iostream>
using namespace std;
int binary(int arr[], int n, int key){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==key){
            return mid ;
        }
        else if(arr[mid]<key){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return -1;
}

int main(){
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int key;
    cout << "Enter the target value" << endl;
    cin >> key;
    int index=binary(arr, n , key);
    if(index==-1){
        cout << "Element not found" << endl;
    }
    else{
        cout << "Element found at index " << index << endl;
    }
    return 0;
}