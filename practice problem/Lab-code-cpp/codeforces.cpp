#include<bits\stdc++.h>
using namespace std;
int main(){

    int n,p,q,level,count=0;
    cin>>n;
    int arr[n+1]={0};

    cin>>p;
    for(int i=0;i<p;i++){
        cin>>level;
        arr[level]=1;
    }
    cin>>q;
    for(int i=0;i<q;i++){
        cin>>level;
        arr[level]=1;
    }
    for(int i=1;i<=n;i++){
        if(arr[i]==1){

            count++;
        }
    }

    if(count==n){
        cout<<"working"<<endl;
    }
    else{
        cout<<"Oh my key"<<endl;
    }

}
