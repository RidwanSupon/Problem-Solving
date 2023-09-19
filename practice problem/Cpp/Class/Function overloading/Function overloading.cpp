#include<iostream>
using namespace std;
class print_data{
public:
    void print(int i){
    cout<<"Integer value: "<<i<<endl;
    }
    void print(double f){
    cout<<"Floating value: "<<f<<endl;
    }
    void print(string c){
    cout<<"Character Value: "<<c<<endl;
    }
};

int main(){

    print_data ob1;
    ob1.print(12);
    ob1.print(12.5);
    ob1.print("Hello print");

    return 0;
}
