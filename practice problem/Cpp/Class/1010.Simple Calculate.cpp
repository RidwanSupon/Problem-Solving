#include<iostream>
#include<iomanip>
using namespace std;

class Total_Amount{

public:
    double product1,product2,quantity1,quantity2;
    double price1,price2;
    int solution(){
    cin>>price1>>quantity1>>price1;
    cin>>price2>>quantity2>>price2;
    double ans = 0;
    ans=(quantity1*price1)+(quantity2*price2);

    cout<<setprecision(2)<<fixed<<"VALOR A PAGAR: R$ "<<ans<<endl;
    }
};
int main()
{
    Total_Amount input;
    input.solution();
    return 0;
}
