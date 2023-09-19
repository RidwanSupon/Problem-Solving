#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    int count =0;
    cout<<"Enter How long Prime number You want: ";
    cin>>n;

    for(int i=2;i<=n;i++){
            count=0;
            for(int j=2;j<i/2;j++){

        if(i%j==0){
            count ++;
            break;

        }
    }

        if(count==0){
        cout<<i<<" is prime number"<<endl;

        }
        else{
            cout<<i<<" is not prime number"<<endl;
        }


  }

            return 0;
}
