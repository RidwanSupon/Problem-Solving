#include<iostream>
using namespace std;

class summation{
private:
    int a,b;
public:
    summation(){
    int x,y;
    a=x;
    b=y;
    cin>>a>>b;
    }
    void show(){

        cout<<a+b<<endl;

    }
};
int main(){

    summation input;
    input.show();
    return 0;

}
