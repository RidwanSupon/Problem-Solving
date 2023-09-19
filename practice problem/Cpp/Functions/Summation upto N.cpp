#include<iostream>
using namespace std;

int Total_Num(int n){

    int k,sum=0;
    for(int i=0;i<n;i++){
        printf("#Num %d: ",i+1);
        cin>>k;
        sum+=k;
    }
    return sum;

}


int main(){
    int N;
    int send=0;

    cin>>N;
    send=Total_Num(N);
    cout<<"Total: "<<send;

    return 0;


}
