#include<bits/stdc++.h>
using namespace std;
int main(){

    string str1;
    string str2,str3,str4;
    cin>>str1;
    cin>>str2;
    int flag=0;
    int len;
    len=str1.length();

    for(int i=str2.length()-1,j=0;i>=0,j<=str1.length()-1;i--,j++){
            //cout<<str2[i];
            str3=str2[i];
            str4=str1[j];
            //cout<<str3<<str4;
            if(str3==str4){
                flag++;
            }
    }
    if(flag==len){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }


    return 0;

}
