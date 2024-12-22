#include<bits/stdc++.h>
using  namespace std;
int main(){
    vector <int> v ;
    cout << "Capacity->" << v.capacity() << endl;

    //Push
    v.push_back(1);
    cout << "Capacity->" << v.capacity() << endl;
    v.push_back(2);
    cout << "Capacity->" << v.capacity() << endl;
    v.push_back(3);
    cout << "Capacity->" << v.capacity() << endl;
    cout << "size->" << v.size() << endl;

    cout << "element at 2nd Inde" << v.at(2) << endl;

    cout << "Front->" << v.front() << endl;
    cout << "Back->" << v.back() << endl;

// Pop
    cout << "Before Pop" << endl;
    for(int i:v){
        cout << i << " ";
    } cout << endl;

    v.pop_back();
    cout << "after pop" << endl;
    for(int i:v){
        cout << i << " ";
    }

    vector<int> a(5,1) ;
    

    // copy last vector
    vector<int> last(a);
    cout <<"print a" << endl;
    for(int i:a){
        cout << i << " ";
    }
}