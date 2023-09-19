#include<bits\stdc++.h>
using namespace std;
int main(){
    int n,p,q,play_level;
    int count=0;

    cin>>n;
    cin>>p;
    int arr[n+1]={0};
    for(int i=0;i<p;i++){
        cin>>play_level;
        arr[play_level]=1;
    }
    cin>>q;
    for(int i=0;i<q;i++){
        cin>>play_level;
        arr[play_level]=1;
    }
    for(int i=1;i<=n;i++){
        if(arr[i]==1){
            count++;
    }


}
    if(count==n){
        cout<<"I become the guy."<<endl;
    }else{
cout<<"Oh, my keyboard!"<<endl;
   } return 0;

}
