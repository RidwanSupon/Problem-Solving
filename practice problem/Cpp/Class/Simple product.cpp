#include<iostream>
using namespace std;

class Multiply{
public:
    int a,b;
    void Total(){
    cin>>a>>b;
    int multi=a*b;
    cout<<"PROD = "<<multi<<endl;
    }
};

int main(){
Multiply input;
input.Total();
return 0;

}
