#include<bits/stdc++.h>
using namespace std;
void print(int *p){
    cout << *p << endl;
}

void update(int *p){
    *p=*p+1;
}


int getSum(int arr[], int n) {
    cout << "Size " << sizeof(arr) << endl; // prints size of pointer (not full array)
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum = sum + arr[i];
    }
    return sum;
}

int main() {
    int arr[6] = {1,2,3,4,5,8};
    cout << getSum(arr+3, 3) << endl;  // Output: 15
    return 0;
}
