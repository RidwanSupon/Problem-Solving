#include<iostream>
#include<iomanip>
using namespace std;
class average{
public:
    double a,b;
    void result(){
    cin>>a>>b;
    double average_result = (a*3.5 + b*7.5)/(3.5+7.5);
    cout<<setprecision(5)<<fixed<<"MEDIA = "<<average_result<<endl;
    }
};
int main(){
    average input;
    input.result();
    return 0;
}

