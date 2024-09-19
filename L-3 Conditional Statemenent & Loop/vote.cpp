#include <iostream>
using namespace std;
int main (){
    int age;
    cout << "Enter your age : \n" ;
    cin >> age ;
    if (age>=18){
        cout << "You are eligible for Voting";
    } else{
        cout << " You are not eligible for Voting";
    }
    return 0;
}