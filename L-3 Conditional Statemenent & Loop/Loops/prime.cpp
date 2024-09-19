#include <iostream>
using namespace std;
int main (){
    int i , n ;
    cout << "Enter the number:\n";
    cin >> n ;
    bool isPrime=true;
    for (i=2; i<=n-1; i++){
        if(n%i==0){
            isPrime=false;
            break;
        } 
    }
    if (isPrime==true){
        cout << "Prime No. \n";
    } else {
        cout << " Non Prime No. \n";
    }
    return 0;
} 