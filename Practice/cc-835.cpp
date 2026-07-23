#include <bits/stdc++.h>
using namespace std;
int main(){
    int sum=0;
    int sunny=0;
    int rainy=0;
    int days[7];
    
    for(int i=0; i<7; i++){
        cin>>days[i];
    }
    for(int i=0; i<7; i++){
        if(days[i]==1){
            sunny++;
        }else{
            rainy++;
        }
    }
    if(sunny>rainy){
        cout<<"Yes"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}
