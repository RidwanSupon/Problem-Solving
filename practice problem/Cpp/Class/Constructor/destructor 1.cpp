#include<iostream>
#include<cstdio>

using namespace std;

class A{
public:

    A(int a){
        printf("1 Non-default Constructor Called\n");
    }

    ~A(){
        printf("Destructor Called \n");
    }
    A(int x, int y){
    cout<<"2 Constructor"<<endl;
    x=10;
    y=11;
    cout<<x+y<<endl;
    }
    A(){
    cout<<"3 Constructor"<<endl;
    }
};
int main(){
        A input1,input2(1,1),input3(1);
}
