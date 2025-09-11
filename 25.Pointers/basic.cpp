#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[10]={23,122,41,67};
    cout << "Address of first index:"<<arr<<endl;
    cout << "Address of first index:"<<&arr[0]<<endl;

    cout <<"3rd"<<" " << *arr << endl;
    cout <<"4th"<< " " << *arr+1 << endl;
    cout <<"5th"<< " " << *(arr+1)<< endl;
    cout <<"6th"<< " " << *(arr)+1<< endl;

    int i=3;
    cout << i[arr] << endl;
} 