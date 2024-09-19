#include <iostream>
using namespace std;
int main (){
    char ch;
    cout << "Enter your Character:" << endl;
    cin >> ch ;
     if (ch>='a' && ch<='z'){
        cout << "Lower Character\n";
     } else {
        cout << " Upper Character\n";
     }
    return 0;
}