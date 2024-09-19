#include<iostream>
using namespace std;
int main(){
    int a=11 , b=5;
    cout << "Sum = " << (a+b)<< endl;
    cout << "Differenece =" << (a-b) << endl;
    cout << "Multiplication =" << (a*b) << endl;
    cout << "Division =" << (a/b) << endl;
    cout << "Modulo =" << (a%b) << endl;
    cout << (a<=b) << endl;
    cout << (a>=b) << endl;
    cout << (a!=b) << endl;
    cout << !(a<b) << endl; //will reverse the answer 

    cout << ((a<b) || (a>b)) << endl; //OR Operator any one one condition if true then it will print 1
    cout << ( (a<b) && (b>a)) << endl; //AND operator , when all conditions is true then only it will print 1 otherwise 0
    
    return 0;
}