#include<iostream>
#include<vector>
using namespace std;

// int main(){
//     vector<int> vec(5,0);
//     cout << vec[0] << endl;
//     cout << vec[1] << endl;
//     cout << vec[2] << endl;
//     cout << vec[3] << endl;
//     cout << vec[4] << endl;
//     return 0;
// }

int main(){
    vector<char> vec={'a','b','c','d'};
    for(char i : vec){
        cout << i << endl;
    }
}