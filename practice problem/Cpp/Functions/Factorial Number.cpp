#include<iostream>
using namespace std;

int fact(int N)
{
    int multiply=1;
    for(int i=N;i!=0;i--){
        multiply *= i;
        cout<<multiply<<endl;
    }
    cout<<multiply<<endl;
    return multiply;

}
int main()
{
    int N;
    cout<<"Enter Factorial: ";
    cin>>N;

    cout<<fact(N)<<endl;

    return 0;
}
