#include <iostream>
using namespace std;
int main (){
    int mark;
    cout << "Enter your mark : \n" ;
    cin >> mark ;
    if (mark>=90){
        cout << "Grade A";
    } else if (80<mark<90){
        cout << "Grade B";
    } else if (70<mark<80){
        cout << "Grade C" ;
    } else{
        cout << "Grade D";
    }
    return 0;
}