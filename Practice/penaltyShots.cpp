#include<bits/stdc++.h>
using namespace std;
int main(){
    int sum1=0;
    int sum2=0;

    int ans[10];
    for(int i=0; i<10; i++){
        cin>>ans[i];
    }

    for(int i=0; i<10; i++){
        if((i+1)
        %2!=0){
            sum1+=ans[i];
        }else{
            sum2+=ans[i];
        }
    }

    if(sum1==sum2){
        cout<<0<<endl;
    } else if(sum1<sum2){
        cout<<"Team2"<<endl;
    }else{
        cout<<"Team1"<<endl;
    }
    return 0;
}