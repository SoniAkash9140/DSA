#include<iostream>
#include<array>
using namespace std;
int main(){
    // Declare an array of size 5
    array<int, 5> arr = {1, 2, 3, 4, 5};

    // Access elements using the at() method
    cout << "Element at index 0: " << arr.at(0) << endl;
    cout << "Element at index 1: " << arr.at(1) << endl;

    // Modify an element using the at() method
    arr.at(2) = 10;
    cout << "Modified element at index 2: " << arr.at(2) << endl;

    //first and last element
    cout << "First element: " << arr.front() << endl;   
    cout << "Last element: " << arr.back() << endl;

    // Iterate through the array using a range-based for loop
    cout << "Array elements: ";
    for (const auto& elem : arr) {
        cout << elem << " ";
    }
    cout << endl;

    return 0;
}