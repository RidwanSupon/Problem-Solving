#include<iostream>
using namespace std;

class SimpleSum{
public:
    int a,b;
    void sum(){
    cin>>a>>b;
    int sum=a+b;
    cout<<"SOMA = "<<sum<<endl;
    }
};
int main(){

    SimpleSum input;
    input.sum();
    return 0;

}
