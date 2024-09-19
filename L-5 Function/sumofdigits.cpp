#include<iostream>
using namespace std ;
int sumOfDigits(int num){
    int digsum=0;

    while(num>0){
        int lastDig=num%10;
        num/=10;

        digsum+=lastDig;
    }
    return digsum;
}

int main(){
    cout << "sum =" << sumOfDigits(2589) << endl;
    return 0;
}
