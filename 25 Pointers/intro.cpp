#include<bits/stdc++.h>
using namespace std;
int main(){
    int num=5;
    cout << num << endl;

    //address operator - &
    cout << "Address of num is" << &num << endl;

    int *ptr=&num;
    cout << "Address:"<<ptr <<endl;
    cout << "value:"<<*ptr<<endl;

    double d=4.2;
    double *p2=&d;

    cout <<"Address"<<p2<<endl;
    cout<<"Value"<<*p2<<endl;

    cout << "Size of Integer" << sizeof(num)<<endl;
    cout << "Size of pointer" << sizeof(ptr)<<endl;
    cout << "Size of pointer" << sizeof(p2)<<endl;

    // //copying pointer 
    // int num=5;
    // int a=num;
    // cout << "a before" << num << endl;
    // a++;
    // cout << "a after" << num << endl; 

    // int *p=&num;
    // cout << "before" << num <<endl;
    // (*p)++;
    // cout << "after" << num << endl;

    // //copying a pointer
    // int *q=p;
    // cout << p << "-" << q << endl;
    // cout << *p <<"-" <<*q << endl;
    

    // //important concept
    // int i=3;
    // int *t=&i;
    // *t=*t+1;
    // cout << *t<<endl;
    // cout << "before" << t << endl;
    // t=t+1;
    // cout <<"after"<<t<<endl;

    return 0;

}