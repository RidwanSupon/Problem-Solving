#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;

class const_dest
{
public:
    float result;
    const_dest(float x1,float x2,float y1,float y2,float r)
    {

        result= sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    }
    void show(float r){
        if(result>r)
        {
            cout<<"The line is outside from circle"<<endl;
        }
        else if(result<r)
        {
            cout<<"The line is in inside"<<endl;
        }
        else
        {
            cout<<"The line equal to radius"<<endl;
        }
    }
    ~const_dest()
    {
        cout<<"Inside destructor"<<endl;
    }
};

int main()
{
    float x1,x2,y1,y2,r;
    cin>>x1>>x2>>y1>>y2>>r;
    const_dest ob1(x1,x2,y1,y2,r);
    ob1.show(r);



    return 0;
}
