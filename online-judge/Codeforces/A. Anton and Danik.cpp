#include<iostream>
#include<string.h>
using namespace std;
int main(){

    int n,count=0,count2=0;
    string s;

    cin>>n>>s;
    for(int i=0;s[i]!='\0';i++){
        if(s[i]=='D'){
            count++;
        }
        if(s[i]=='A'){
            count2++;
        }
    }

            if(count>count2){
                cout<<"Danik"<<endl;
            }

            if(count<count2){
                cout<<"Anton"<<endl;
            }

            if(count==count2){
                cout<<"Friendship"<<endl;
            }

}
