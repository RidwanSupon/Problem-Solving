#include<iostream>
using namespace std;
class const_dest{
public:
    int sum;
    const_dest(int a,int b){
        cout<<"inside Constructor"<<endl;
        sum=a+b;
    }
    void show(){
        cout<<"sum = "<<sum<<endl;
    }
    ~const_dest(){
        cout<<"Inside Destructor"<<endl;
    }

};

int main()
{
    const_dest input(5,5);
    input.show();
    return 0;
}
