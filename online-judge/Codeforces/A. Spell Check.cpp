#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;    ////// just take input do not any operation in code;
    string s1="Timur";
    string s2;
    cin>>s2;
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    if(s1==s2){
    cout<<"YES"<<endl;

    }
    else
        cout<<"NO"<<endl;
    }
}
