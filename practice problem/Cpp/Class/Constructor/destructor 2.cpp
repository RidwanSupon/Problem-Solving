#include<iostream>
using namespace std;

class my_class{

private:
    int a;
public:
    my_class(){
    cout<<"Constructor: 1"<<endl;
    a=10;
    }
    ~my_class(){
    cout<<"Destructor"<<endl;
    }
    void show(){
    cout<<a<<endl;
    }
};
int main(){
    my_class ob;
    ob.show();
    return 0;
}
