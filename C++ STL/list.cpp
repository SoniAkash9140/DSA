#include<iostream>
#include<list>
using namespace std ;
int main (){
    list<int> l ;
    l.push_back(1); //pop
    l.push_front(2); //pop

    for(int i:l){
        cout << i << " ";
    }

    cout << endl;
    l.erase(l.begin());
    for(int i:l){
        cout << i << endl;
    }
    cout <<"SIZE : " <<  l.size()<< endl;
}