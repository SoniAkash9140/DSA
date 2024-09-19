#include<iostream>
using namespace std ;             //A  
int main (){                     //B B 
    char ch = 'A';              //C C C 
    for(int i=0;i<5;i++){      //D D D D
        for(int j=0;j<=i;j++){//E E E E E
            cout << ch ;
        }
        ch++;
        cout << endl;
    }
    return 0;
}