
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<char> vec={'a','b','c','d'};
    cout << "size=" << vec.size() << endl; //size of a vector 
    vec.push_back(25);
    cout << "size=" << vec.size() << endl;
    for(char i : vec){
        cout << i << endl;

    }
}