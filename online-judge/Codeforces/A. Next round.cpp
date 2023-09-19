#include<iostream>
using namespace std;
int main()
{
    int m,n,k[100],count=0;
    cin>>m>>n;

    for(int i=0;i<m;i++){
        cin>>k[i];
    }
    for(int i=0;i<m;i++)
    {
        if(k[i]>0 && k[i]>=k[n-1])
        {
            count++;
        }
    }
    cout<<count<<endl;
}
