#include<iostream>
using namespace std;
int main()
{
    int n,h,people_height;
    int sum=0,count=0;
    cin>>n>>h;
    for(int i=0;i<n;i++)
    {
        cin>>people_height;
        sum=0;

        if(people_height > h)
        {
            count+=2;
        }
        else{
            count++;
        }
        sum+=count;
        cout<<sum<<endl;
    }
    cout<<sum<<endl;

    return 0;
}
