#include<iostream>
#include<iomanip>
using namespace std;

class salaryBonus{
public:
    string employee_name;
    double salary,selling_amount;
    int solution(){
        cin>>employee_name>>salary>>selling_amount;
        double x = (selling_amount*.15)+salary;
        cout<<setprecision(2)<<fixed<<"TOTAL = "<<x<<endl;
    }
};
int main(){
    salaryBonus input;
    input.solution();
    return 0;
}
