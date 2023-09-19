#include<iostream>
using namespace std;
class my_class{
public:
    int x;
    my_class(int a){
        x=a;
    }
    my_class(const my_class &obj){

        x= obj.x+2;
    }
};

int main(){
    my_class ob1(20);
    my_class ob2(ob1);
    cout<<ob1.x<<endl;
    cout<<ob2.x;

    return 0;
}
