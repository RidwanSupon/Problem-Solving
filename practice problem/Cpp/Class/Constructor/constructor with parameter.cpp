#include<iostream>
using namespace std;

class Multiplication{
private:
    int a,b;
public:
    Multiplication(int x,int y){
        a=x;
        b=y;
    }
    void show(){
        cout<<a*b<<endl;
    }

};
int main(){

    Multiplication input(10,20);
    input.show();
}
