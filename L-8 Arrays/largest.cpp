#include<iostream>
using namespace std;
int main(){
    int nums[]={15,25,32,14,25};
    int size=5;

    int largest= INT8_MIN;

    for(int i=0; i<size; i++){
        if(nums[i]>largest){
            largest=nums[i];
        }
    }
    cout << "largest =" << largest << endl;
    return 0;
}