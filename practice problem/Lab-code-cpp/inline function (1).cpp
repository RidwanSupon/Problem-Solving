#include<iostream>
using namespace std;

class inLine{
public:
    inline void demo();
    inline void demo2();
};

inline void inLine::demo(){
    cout<<"InLINE Function 1"<<endl;
}
inline void inLine::demo2(){
    cout<<"InLINE Function 2"<<endl;
}
int main(){

    inLine ob1;
    ob1.demo();
    ob1.demo2();

    return 0;

}
