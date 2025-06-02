Vector- Dynamic 

Vector Syntax-
        vector<object_type> variable_name;
        Example:

vector<int> v1;
vector<char> v2;
vector<string> v3;


**Functions in set:**

insert() – to insert an element in the set.
set<int> s;
s.insert(1);
s.insert(2);


begin() – return an iterator pointing to the first element in the set.
s.begin();


end() – returns an iterator to the theoretical element after the last element.
s.end();


count() – returns true or false based on whether the element is present in the set or not.
set<int> s;
s.insert(1);
s.insert(2);
s.count(2); //returns true


clear() – deletes all the elements in the set.
s.clear();


find() – to search an element in the set.
set<int> s;
s.insert(1);
s.insert(2);
if(s.find(2)!=s.end())
cout<<"true"<<endl;


erase() – to delete a single element or elements between a particular range.
s.erase();


size() – returns the size of the set.
s.size();


empty() – to check if the set is empty or not.
s.empty();

cbegin() – it refers to the first element of the set.


cend() – it refers to the theoretical element after the last element of the set.


rbegin() – it points to the last element of the set.


rend() – it points to the theoretical element before the first element of the set.


bucket_size() – gives the total number of elements present in a specific bucket in a set.


emplace() – to insert an element in the set.
max_size() – the maximum elements a set can hold.


max_bucket_count() – to check the maximum number of buckets a set can hold.
