#include<bits/stdc++.h>
using namespace std;
int main(){
    int temp[10]={1,2};

    cout << "1st"<<" "<< sizeof(temp) <<endl;
    cout << "2nd"<<" "<< sizeof(*temp)<<endl;
    cout << "3rd"<<" "<< sizeof(&temp)<<endl;

    int *ptr=&temp[0];
    cout << sizeof(ptr)<<endl;
    cout << sizeof(*ptr)<<endl;
    cout << sizeof(&ptr)<<endl; 

}