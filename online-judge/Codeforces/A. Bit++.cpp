#include<iostream>
using namespace std;
int main()
{
    int n;
    string s;
    int count=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s;
    if(s[1]=='+')
    {
        count++;
    }
    else{
        count--;
    }

    }cout<<count;
    return 0;

}
