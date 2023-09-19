#include<bits\stdc++.h>
using namespace std;
int main(){

    int n,func=0;
    cin>>n;
    if(n%2==0){
        func=n/2;
        cout<<func;
    }
    else{
        func = -(n/2+1);
        cout<<func;
    }

}
