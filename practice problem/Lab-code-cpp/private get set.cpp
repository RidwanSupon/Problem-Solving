#include<iostream>
using namespace std;

class hello{
private:
    int a,b;
public:
    void setter(int x,int y){
        a=x;
        b=y;
    }
    int get(){
    return a+b;
    }

};int main(){
    hello ob1,ob2;
    int n,m;
    int e,f;
    cout<<"Input two number:";
    cin>>n>>m;
    cout<<"Input another two number:";
    cin>>e>>f;
    ob1.setter(n,m);
    ob2.setter(e,f);
   // ob1.get();
    cout<<"sum= "<<ob1.get()<<endl;
    cout<<"sum= "<<ob2.get();

    return 0;

}
