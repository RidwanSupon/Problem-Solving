#include<iostream>
using namespace std;

class my_class{
private:
    int x;
public:
    my_class(int y){
        x=y;
    }
    int show(){
        return x;
    }
};
int main(){
    my_class ob1(11);
    my_class *p;
    p = &ob1;
    cout<<"object value : "<<ob1.show()<<endl;
    cout<<"Pointer Value : "<<p->show()<<endl;

}
