#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,m,a,ans=0;
    cin>>n>>m>>a;
    ans=ceil((double)m/a)*ceil((double)n/a);
    cout<<ans<<endl;
}
