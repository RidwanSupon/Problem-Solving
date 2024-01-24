#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int flag=1;
    cin>>s;
    for(int i=0;i<1;i++){
        if(s[i]=='H'||s[i]=='Q'||s[i]=='9'){
            cout<<"YES"<<endl;
            flag=0;
            break;
        }
    }
    if(flag==1){
        cout<<"NO"<<endl;
    }
}


//unsolved


