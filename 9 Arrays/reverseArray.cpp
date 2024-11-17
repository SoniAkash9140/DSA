#include<iostream>
using namespace std;
int reverseArray(int arr[] , int size ){
    int start=0 , end=size-1;
    while(start < end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

int main (){
    int arr[]={4,5,8,9,5,2,7};
    int size=7;
    
    reverseArray(arr,size);

    for(int i=0; i<7; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}