#include<iostream>
using namespace std;
int main(){
    int nums[]={15,25,32,14,25};
    int size=5;

    int smallest= INT8_MAX;

    for(int i=0; i<size; i++){
        if(nums[i]<smallest){
            smallest=nums[i];
        }
    }
    cout << "smallest =" << smallest<< endl;
    return 0;
}