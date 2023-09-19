#include<iostream>
using namespace std;

//Base class
class SHAPE{
public:
    void set_width(int w){
    width=w;
    }
    void set_height(int h){
    height=h;
    }
protected:
    int width;
    int height;
};
//derived class
class Rectangle:public SHAPE{
public:
    int get_Area(){
    return (height*width);
    }

};
int main(){
    Rectangle ob;
    ob.set_height(10);
    ob.set_width(11);
    cout<<"Area of Rectangle is: "<<ob.get_Area()<<endl;
    return 0;
}
