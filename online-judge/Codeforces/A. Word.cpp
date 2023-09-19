#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int count=0,temp=0;
    string s;
    cin>>s;

    for(int i=0;s[i]!='\0';i++){
        if(s[i]>='a'&&s[i]<='z')
        {
            count++;
        }
        if(s[i]>='A'&&s[i]<='Z'){

            temp++;
        }


    }
    if(count>temp){
        for(int i=0;s[i]!='\0';i++){

            if(s[i]>='A'&&s[i]<='Z')
            {
                s[i]+=32;
            }
        }cout<<s<<endl;
    }
            else if(temp>count){
                for(int i=0;s[i]!='\0';i++){

                if(s[i]>='a'&&s[i]<='z')

                {
                    s[i]-=32;
                }
            }cout<<s<<endl;

            }


            else if(count==temp){
                for(int i=0;s[i]!='\0';i++){

                if(s[i]>='A'&&s[i]<='Z')
                {
                    s[i]+=32;
                }
            }
            cout<<s<<endl;
        }


}
