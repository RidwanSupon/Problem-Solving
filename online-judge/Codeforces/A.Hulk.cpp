#include<bits\stdc++.h>
using namespace std;
int main(){

    int num;
    cin>>num;
    for(int i=1;i<num;i++){
        if(i%2!=0){
            cout<<"I hate that ";
        }
        else{
            cout<<"I love that ";
        }
    }
    if(num%2==0){
        cout<<"I love it"<<endl;
    }
    else{
        cout<<"I hate it"<<endl;
    }
    return 0;
}
