#include<iostream>
using namespace std;
int getPivot(int arr[], int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
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
    int pivot=getPivot(arr, n);
    cout << "The pivot index is " << pivot << endl;
    return 0;
}