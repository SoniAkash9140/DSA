#include<bits/stdc++.h>

using namespace std;

void explanation(){
  vector<int> v;
  v.push_back(1);
  v.emplace_back(2);

  vector<pair<int,int>> vec;
  vec.push_back({1,2});
  vec.emplace_back(1,2);   //no need of extra bracket and it is faster than push_back

  vector<int>v(5,100);    //op={100,100,100,100,100}
  vector<int> v(5);  //op={0,0,0,0,0}

  vector<int> v1(5,20);
  vector<int> v2(v1);
}

int main() {
  set < int > s;
  for (int i = 1; i <= 10; i++) {
    s.insert(i);
  }

  cout << "Elements present in the set: ";
  for (auto it = s.begin(); it != s.end(); it++) {
    cout << * it << " ";
  }
  cout << endl;
  int n = 2;
  if (s.find(2) != s.end())
    cout << n << " is present in set" << endl;

  s.erase(s.begin());
  cout << "Elements after deleting the first element: ";
  for (auto it = s.begin(); it != s.end(); it++) {
    cout << * it << " ";
  }
  cout << endl;

  cout << "The size of the set is: " << s.size() << endl;

  if (s.empty() == false)
    cout << "The set is not empty " << endl;
  else
    cout << "The set is empty" << endl;
  s.clear();
  cout << "Size of the set after clearing all the elements: " << s.size();
}