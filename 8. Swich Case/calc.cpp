#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout << "Enter the value of a" << endl;
    cin >> a;
    cout << "enter the value of b" << endl;
    cin >> b;

    char op;
    cout << "Enter the character you want to perform" << endl;
    cin >> op;
    switch (op){
        case '+':
        cout << "sum =" << a+b << endl;
        break; 

        case '-':
        cout << "Subs=" << a-b << endl;
        break;

        case '*':
        cout << "Mul.=" << a*b << endl;
        break;

        case '/':
        cout << "Div. =" << a/b << endl;
        break;

        case '%':
        cout << "modul.=" << a%b << endl;
        break;

        default :
        cout << "Enter a valid operation" << endl;
    }
    return 0;
}