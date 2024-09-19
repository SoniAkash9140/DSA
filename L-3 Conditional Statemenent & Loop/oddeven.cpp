#include <iostream>
using namespace std;
int main (){
    int n;
    cout << "Enter the number : \n" ;
    cin >> n ;
    if (n%2==0){
        cout << "The given no. is Even";
    } else{
        cout << " The given no. is Odd";
    }
    return 0;
}