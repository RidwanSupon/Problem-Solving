#include<iostream>
using namespace std;

class test{
    public:
        int a,b;
        int sum(int value1, int value2){
            cout<<value1+value2<<endl;
        }
};

int main(){
    test ans;
    ans.sum(10,21);
    return 0;

}
