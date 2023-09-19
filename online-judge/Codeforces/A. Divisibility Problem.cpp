#include<iostream>
using namespace std;
int main(){
int t;
long long int a,b;
cin>>t;
while(t--){
    cin>>a>>b;
    int count=0,div=0;
    if(a%b==0){
        cout<<"0"<<endl;
    }
    else{
        div=((a/b)+1)*b;
        cout<<div-a<<endl;
    }
}
    return 0;
}
