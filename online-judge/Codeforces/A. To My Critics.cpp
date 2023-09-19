#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int arr[4];
    while(t--){
        for(int i=0;i<3;i++){
            cin>>arr[i];
        }
        sort(arr,arr+3);
        for(int i=0;i<3;i++){
            if(arr[i+1]+arr[i+2]>=10){
                    cout<<"YES"<<endl;
                    break;
            }
            else{
                cout<<"NO"<<endl;
                break;
            }
        }
    }
}
