#include<iostream>
using namespace std;
void starTriangle(int X){
    for(int i=0; i<=X; i++){
        for(int j=0; j<=i; j++){
            cout << "*" ;
        }
        cout << endl;
    }
}
int main(){
    starTriangle(3);
    starTriangle(4);
}