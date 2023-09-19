#include<bits/stdc++.h>
using namespace std;
int main(){
int t,n,i;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int arr[n],maxValue=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]>maxValue){
            maxValue=arr[i];
        }
    }
    sort(arr,arr+n);
    for(i=0;i<n;i++){
    cout<<maxValue-arr[i]<<endl;
    break;
    }
}
}
