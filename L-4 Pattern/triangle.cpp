#include<iostream>
using namespace std;
int main (){
      int n=4;
      int num;
      for (int i=0 ; i<=n-1 ;i++){
        int num=1;
        for(int j=0;j<=i;j++){
            // cout << j << " ";
            cout << (i+1);
            num ++;
        }
        cout << endl;
      }
    return 0;
}