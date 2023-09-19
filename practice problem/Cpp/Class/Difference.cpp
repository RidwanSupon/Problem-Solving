#include<iostream>
using namespace std;

class difference{
public:
    int a,b,c,d;
    void result(){
        cin>>a>>b>>c>>d;
    int total = (a*b)-(c*d);
    cout<<"DIFERENCA = "<<total<<endl;
    }
};
int main(){
difference input;
input.result();
return 0;
}
