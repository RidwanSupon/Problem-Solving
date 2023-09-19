#include<iostream>
using namespace std;

class base{

    int x,y;
public:
    void set_x(int a,int b){
    x=a;
    y=b;
    }
    void add(){
    cout<<"Addition: "<<x+y<<endl;
    }
    void sub(){
    cout<<"Substraction: "<<x-y<<endl;
    }
};
class derived:public base{
    double a,b;
    public:
    void set_y(double x,double y){
    a=x;
    b=y;
    }
    void div(){
    cout<<"Division: "<<a/b<<endl;
    }
};
int main(){
    derived ob;
    ob.set_x(12,14);
    ob.set_y(12.5,3.3);
    ob.div();
    ob.sub();
    ob.add();

    return 0;
}
