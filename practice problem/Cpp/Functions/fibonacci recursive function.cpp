#include<iostream>
using namespace std;

int fibo(int a)
{
    if(a<=1){
        return a;
    }
    else{
        return fibo(a-1)+fibo(a-2);
    }
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
    cout<<fibo(i)<<"\t";
    }
    cout<<endl;
    return 0;
}
