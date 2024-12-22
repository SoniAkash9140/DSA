// in Deque we can use deletion or addion from both side .

#include<iostream>
#include<deque>

using namespace std;
int main(){
    deque<int> d ;
//push
d.push_back(1);
d.push_front(2);
// for (int i:d){
//     cout << i << " ";
// }

//pop
// d.pop_back();
// cout << endl ;
// for (int i:d){
//     cout << i << " ";
// }

// d.pop_front();
// cout << endl;
// for (int i:d){
//     cout << i << " ";
// }

//print first index element
cout << endl ;
cout << "Print first index element :" << d.at(1) << endl;

cout << "Front" << d.front() << endl;
cout << "back" << d.back() << endl;

//empty or not 
cout << "Empty or NOT" << d.empty() << endl;

//erase(from-to)
cout << "before erase" << d.size()<< endl;
d.erase(d.begin() , d.begin()+1);
cout << "after erase" << d.size() << endl;
for (int i:d){
    cout << i << endl;
}

}