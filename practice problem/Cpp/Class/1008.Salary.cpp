#include<iostream>
#include<iomanip>
using namespace std;

class salary{
public:
    double hour,rate,N;
    int SolutionOfSalary(){
    cin>>N;
    cin>>hour>>rate;
    double ans = hour*rate;
        cout<<"NUMBER = "<<N<<endl;
        cout<<setprecision(2)<<fixed<<"SALARY = U$ "<<ans<<endl;

    }

};
int main(){
    salary input;
    input.SolutionOfSalary();
    return 0;

}
