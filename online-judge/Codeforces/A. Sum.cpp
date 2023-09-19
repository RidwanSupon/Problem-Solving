#include<bits/stdc++.h>
using namespace std;
int main(){
int n,flag=0;
cin>>n;
int a,b,c;

while(n--){

    cin>>a>>b>>c;
if(a==b+c){
    cout<<"YES"<<endl;
}
else if(b==a+c){
    cout<<"YES"<<endl;
}
else if(c==a+b){
    cout<<"YES"<<endl;
}
else
    cout<<"NO"<<endl;

}
}
