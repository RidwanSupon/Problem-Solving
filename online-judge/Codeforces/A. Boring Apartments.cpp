#include<bits/stdc++.h>                         ////////bujhte hbe
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
            int n;
    cin>>n;
    int sum=0,total=0;
    for(int i=1;i<=9;i++){

        for(int j=1;j<=4;j++){
            sum=sum*10+i;
            //cout<<sum<<endl;
            total+=j;
            if(sum==n){
    cout<<total<<" ";
            }
        }sum=0;
    }
    }
}
