#include<bits/stdc++.h>
using namespace std ; 
int main(){
    int maxDay=0;
    int d , x , y , z;
    cin>>d>>x>>y>>z;
    int st1=7*x;
    int st2=(y*d)+((7-d)*z);
    maxDay=max(st1,st2);
    cout<<maxDay<<endl;
    return 0;
}
