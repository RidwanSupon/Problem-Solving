#include<iostream>
using namespace std;

//base class SHAPE
class shape {
public:
    void set_Height(int h){
    height = h;
    }
    void set_width(int w){
    width = w;
    }
protected:
    int width;
    int height;

};
//base class paint cost
class paintcost{
public:
    int get_cost(int area){
    return area*11;
    }
};
class Rectangle: public shape,public paintcost{
public:
    int get_area(){
    return (width*height);
    }
};
int main(){
Rectangle ob;
int area;

ob.set_Height(7);
ob.set_width(5);
area = ob.get_area();

cout<<"Area: "<<ob.get_area()<<endl;
cout<<"Cost: "<<ob.get_cost(area)<<endl;
}
