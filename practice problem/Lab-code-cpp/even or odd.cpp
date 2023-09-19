#include<iostream>
using namespace std;

class evenOdd{

    public:
    int n;
    int check(int number){

    if(number%2==0){
        cout<<"Even Number"<<endl;
    }
    else{
        cout<<"Odd Number"<<endl;
    }

    }

};

int main(){
    evenOdd ans;
    ans.check(15);
    return 0;


}
