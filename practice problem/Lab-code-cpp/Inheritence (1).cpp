// single inheritence
#include<iostream>
using namespace std;
class baseA{
public:
    void display(){
    cout<<"Base class"<<endl;
    }
    void sum(){
    int a=5,b=6;
    cout<<a+b<<endl;
    }
};
class derivedB:public baseA{
public:
    void print(){
    cout<<"Derived class"<<endl;
    }
};
int main(){

    baseA ob1;
    ob1.display();
    ob1.sum();
    derivedB ob2;
    ob2.print();
    ob2.sum();

    return 0;
}


