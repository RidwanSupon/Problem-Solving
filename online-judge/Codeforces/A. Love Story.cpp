#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,count=0;
    cin>>t;
    string s1,s2="codeforces";
    while(t--){
        cin>>s1;
        for(int i=0;i<s1.length();i++){
                if(s1[i]!=s2[i]){
                    count++;
                }

        }cout<<count<<endl;
        count=0;
    }
}
