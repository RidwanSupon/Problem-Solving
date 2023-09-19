#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,low=0,i;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n;i++){
       if(arr[i]<0){
        arr[i]=arr[i]*-1;
       }
    }
    sort(arr,arr+n);
    for(i=0;i<n;i++){
            cout<<arr[i];
    break;
        }
    }


