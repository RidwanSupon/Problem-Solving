#include<iostream>
#include<string.h>
using namespace std;

int sum(int a,int b){

    int x=0;
    x = a+b;

    return x;

}

int main()
{
    int s1,s2,y=0;
    cin>>s1>>s2;

    y=sum(s1,s2);

    cout<<y;

    return 0;
}

