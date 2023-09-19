#include<iostream>
using namespace std;
int main(){
    int n,a,b,sum1=0,sum2=0,count1=0,count2=0,draw=0;
    cin>>n;
    while(n--){
        cin>>a>>b;
        if(a>b) {
            count1++;
        }
        else if(b>a){
            count2++;
        }
        else if(a==b){
            draw++;
        }
    }
    //cout<<sum1<<" "<<sum2;
    if(count1==count2){
        cout<<"Friendship is magic!^^"<<endl;
    }
    else if(count1>count2){
        cout<<"Mishka"<<endl;
    }
    else if(count1<count2){
        cout<<"Chris"<<endl;
    }
}

