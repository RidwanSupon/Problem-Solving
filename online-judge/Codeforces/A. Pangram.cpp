#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    string s1;
    cin>>n;
    cin>>s1;
    for(int i=0;i<n;i++){
        s1[i]=tolower(s1[i]);
    }
    sort(s1.begin(),s1.end());
    for(int i=0;i<n;i++){
        if(s1[i]!=s1[i+1]){
            count++;
        }
    }
    if(count==26){
    cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;
}
