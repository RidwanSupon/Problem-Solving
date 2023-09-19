#include<bits/stdc++.h>
using namespace std;
int main(){
    float a,temp=0,flag=false;
    cin>>a;
    float ans=1;
    for(int i=2;i<10;i++){
    ans/=i;
    if(ans==a){
     temp=i;
    flag=true;
    break;
    }
    ans=1;
}
if(flag=true){
    cout<<"YES"<<endl<<'1'<<" "<<temp<<endl;
}
else
    cout<<"NO"<<endl;
}
