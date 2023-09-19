#include<bits/stdc++.h>
using namespace std;
int main(){
string str1,str2,str3;
cin>>str1>>str2>>str3;
string result;
result=str1+str2;

sort(result.begin(),result.end());
sort(str3.begin(),str3.end());
if(result==str3){
cout<<"Yes"<<endl;
}
else
{
    cout<<"No"<<endl;
}
        return 0;
}
