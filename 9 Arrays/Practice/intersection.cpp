#include<iostream>
using namespace std;
int main(){
     int n , m ;
     cout << "Enter value of n" << endl;
     cin >> n ;
     cout << "Enter value of m" << endl;
     cin >> m ;

     int arr1[n] , arr2[m];

     cout << "Enter " << n << " elements for arr1: ";
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    cout << "Enter " << m << " elements for arr2: ";
    for (int i = 0; i < m; i++) {
        cin >> arr2[i];
    }

    


    for (int i = 0; i < n; i++) {
        int element = arr1[i];

        // Check if element is present in arr2
        for (int j = 0; j < m; j++) {
            if (element == arr2[j]) {
                cout << element << endl;
                break;  // Once a match is found, no need to continue inner loop
            }
        }
    }

    return 0;
}