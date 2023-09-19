#include<iostream>
using namespace std;
class my_class{
private:
    int x,y;
public:
    my_class(){
        x = 10;
        y = 3;
        cout<<"Addition : ";
        cout<<x+y<<endl;
    }
    my_class(int a,int b){
        cout<<"Substraction : ";
        cout<<a-b<<endl;
    }
};
int main(){
    my_class ob1,ob2(20,11);
    return 0;
}
