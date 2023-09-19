#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,count=0;
    cin>>t;
    string s;
    int n;
    while(t--){
        cin>>n;
        cin>>s;
        sort(s.begin(),s.end());
        for(int i=0;i<n;i++){
         if(s[i]!=s[i+1]){
            count+=2;
         }
         else{
            count++;
         }
        }
        cout<<count<<endl;
        count=0;
    }
}
