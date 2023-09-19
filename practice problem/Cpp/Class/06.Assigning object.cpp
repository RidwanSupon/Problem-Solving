#include<iostream>
using namespace std;

class my_class{
private:
    int a,b;
    public:
    void result(int x,int y){
        a=x;
        b=y;
    }
    void show(){
        cout<<a+b<<endl;
    }
};
int main(){
    my_class ob1,ob2;
    ob1.result(2,3);
    ob2=ob1;
    ob1.show();
    ob2.show();
    return 0;
}
