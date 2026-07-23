#include<bits/stdc++.h>
using namespace std;
int main(){
    int n , x , y;
    cin>>n>>x>>y;
    int maxMon=0;

    int mon1=n*x;
    int mon2;
    if(y%2==0){
        mon2=(n/2)*y;
    }else{
        mon2=(n/2)*y+x;
    }
    maxMon=max(mon1,mon2);
    cout<<maxMon<<endl;
    return 0;
}