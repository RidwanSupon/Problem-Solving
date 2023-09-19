#include<iostream>
using namespace std;

class test{
private:
    int n;
public:
    test(){
        n=11;
        cout<<"Constructing : ";
    }
    ~test(){
        n=12;
        cout<<"destructing : ";
    }
    void show(){
        cout<<n<<endl;
    }
};
int main(){
    test input;
    input.show();
    return 0;

}
