#include<bits/stdc++.h>
using namespace std ;
int main(){
    
    int N , X , Y , A , B ;
    cin>>N>>X>>Y>>A>>B;

    float petrol=(N/A)*X;
    float diesel=(N/B)*Y;

    if(petrol==diesel){
        cout<<"ANY"<<endl;
    }
    if(petrol<diesel){
        cout<<"Petrol"<<endl;
    }
    if (diesel<petrol){
        cout<<"Diesel"<<endl;
    }
    return 0;
}