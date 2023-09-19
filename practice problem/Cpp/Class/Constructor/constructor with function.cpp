#include<iostream>
using namespace std;

class constructor{
private:
    int a,b,c,d,e,f,g;
public:
     constructor(int x,int y,int z,int p, int q,int r,int zz){
        a=x;
        b=y;
        c=z;
        d=p;
        e=q;
        f=r;
        g=zz;

    }
    int summation(){
    return a+b+c+d;
    }
    int substraction(){
    return a-b;
    }
    double division(){
    return f/g;
    }
    int Multiplication(){
    return e*f*g;
    }
};

int main(){
    int a,b,c,d,e,f,g;
    cin>>a>>b>>c>>d>>e>>f>>g;
constructor ob1(a,b,c,d,e,f,g);;
cout<<"Summation: "<<ob1.summation()<<endl;
cout<<"Substraction: "<<ob1.substraction()<<endl;
cout<<"Multiplication: "<<ob1.Multiplication()<<endl;
cout<<"Division: "<<ob1.division()<<endl;

return 0;

}
