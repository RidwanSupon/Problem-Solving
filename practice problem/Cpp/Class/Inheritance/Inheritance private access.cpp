#include<iostream>
using namespace std;

class Base{
    int x,y,z;
public:
    void set_x(int a,int b,int c){
        x=a;
        y=b;
        z=c;
    }
    void add(){
    cout<<"Addition: "<<x+y+z<<endl;
    }
    void sub(){
    cout<<"Subtraction: "<<x-y-z<<endl;
    }

};
class derived:private Base{
    double w,x;
public:
    void set_y(int i,int j,int k,double a,double b){
    set_x(i,j,k);
    w=a;
    x=b;
    }
    void show(){
    add();
    sub();
     cout<<w/x<<endl;
    }
    void division(){
    cout<<w/x<<endl;
    }
};

int main(){
    derived ob;
    ob.set_y(12,15,13,13.5,7.1);
    ob.division();
    ob.show();

    return 0;

}
