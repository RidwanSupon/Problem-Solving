#include<iostream>
using namespace std;
int main()
{
    int x=0,n;
    cin>>n;

    if(n%5!=0)
    {
        x=n/5;
        x++;
    }
    else{
        x=n/5;
    }

    cout<<x<<endl;

}

