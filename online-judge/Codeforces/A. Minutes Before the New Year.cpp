#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int h,m;
    while(t--){
        cin>>h>>m;
        int temp1=0,temp2=0,temp3=0;
        temp1=(23-h)*60;
        temp2=(60-m);
        temp3=temp1+temp2;
        cout<<temp3<<endl;
        temp1=temp2=temp3=0;

    }

    return 0;
}
