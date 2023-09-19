#include<iostream>
using namespace std;
int main(){

    int n,s,sum=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        if(s==0 || s==1)
        {
            sum+=s;
        }
     }
    if(sum==0)
     {
        cout<<"EASY"<<endl;
     }
    else
    {
        cout<<sum;
        cout<<"HARD"<<endl;
    }

    return 0;

}
