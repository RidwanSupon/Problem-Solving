#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,count=0;
    string s;
    cin>>t;
    while(t--){
        cin>>s;
        sort(s.begin(),s.end());
        for(int i=0;i<s.length();i++){

                if(s[i+1]=='0'){
                    cout<<s[i];
                    count++;
                }

        }

            cout<<count-1<<endl;
            count=0;
    }
}
