#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[3][4];
    cout << "Enter the Elements" << endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout<<arr[i][j] << " ";
        }
        cout<< endl;
        
    }
    
    int sum=0;
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            sum=sum+arr[i][j];
        }
    }
    cout << "Sum of all elements is " << sum << endl;
    return 0;
}