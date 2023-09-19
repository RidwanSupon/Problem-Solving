#include<iostream>
using namespace std;

class Rectangle{

private:
    int height,width,length;
public:
    Rectangle(int h,int w,int l){
        height=h;
        width=w;
        length=l;
    }
    int Area(){
    return length*width;
    }
    int Volume(){
    return height*width*length;
    }

    int perimeter(){
    return 2*(length+width);
    }

};
    int main(){
    int h,w,l;
    cout<<"Heigth, Width and Length is : ";
    cin>>h>>w>>l;
    Rectangle ob1(h,w,l);
    cout<<"Area: "<<ob1.Area()<<endl;
    cout<<"Volume: "<<ob1.Volume()<<endl;
    cout<<"Perimeter: "<<ob1.perimeter()<<endl;
    return 0;

    }
