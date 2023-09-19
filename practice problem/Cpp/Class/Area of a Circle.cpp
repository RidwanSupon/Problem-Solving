#include<iostream>
#include <iomanip>
using namespace std;

class AreaOfTriangle{

public:
    double n=3.14159;
    double r;
    void area(){
        cin>>r;
        cout<<"A=";
        cout << setprecision (4) << fixed <<n*r*r<<endl;
    }

};
int main(){
    AreaOfTriangle input;
    input.area();
    return 0;
}
