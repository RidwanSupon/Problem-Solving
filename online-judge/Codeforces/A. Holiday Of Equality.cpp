#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,maxValue=0,sum=0;
    cin>>t;
    int arr[t];
    for(int i=0;i<t;i++){
        cin>>arr[i];
    }
    for(int i=0;i<t;i++){
            if(arr[i]>maxValue){
                maxValue=arr[i];
            }


    }
    //cout<<"Max value: "<<maxValue<<endl;
    for(int i=0;i<t;i++){
         sum+=(maxValue-arr[i]);
         //cout<<sum<<" ";
    }

    cout<<sum<<endl;
}
