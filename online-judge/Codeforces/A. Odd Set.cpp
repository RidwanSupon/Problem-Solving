#include<bits/stdc++.h>
using namespace std;
int main(){
int t,n;
int sum1=0,sum2=0;
cin>>t;
while(t--){
    cin>>n;

    int arr[n*2],count1=0,count2=0;
    for(int i=0;i<n*2;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n*2;i++){
        if(arr[i]%2!=0){
            count1++;
        }
        else if(arr[i]%2==0){
            count2++;
        }
    }
    if(count1==count2){
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;

        count1=0,count2=0;
}
}
