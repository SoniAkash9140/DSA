#include<iostream>
#include<vector>
using namespace std;
void bubbleSort(vector<int>& arr, int n){
    for(int i=0; i,n; i++){
        bool swapped = false;
        for(int j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if(!swapped) break; // If no two elements were swapped, the array is sorted
    }
}