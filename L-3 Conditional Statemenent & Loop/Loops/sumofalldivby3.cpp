#include <iostream>
using namespace std;
int sumDivisibleBy3 (int n){
    int i ,sum=0;
    for (i=1;i<=n;++i){
        if(i%3==0){
            sum+=i;
        }
    }
    return sum;
}

int main(){
    int n ;
    cout << "Enter a positive integer:\n";
    cin >> n;
    int result = sumDivisibleBy3(n);
    cout << "Sum of all numbers from 1 to "<< n << "which are divisible by 3 is :" << result << endl;
   return 0;
}