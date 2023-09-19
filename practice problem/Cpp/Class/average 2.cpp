#include<iostream>
#include<iomanip>
using namespace std;
class average{
public:
    double a,b,c;
    void result(){
    cin>>a>>b>>c;
    double average_result = (a*2 + b*3 + c*5)/(2+3+5);
    cout<<setprecision(1)<<fixed<<"MEDIA = "<<average_result<<endl;
    }
};
int main(){
    average input;
    input.result();
    return 0;
}


