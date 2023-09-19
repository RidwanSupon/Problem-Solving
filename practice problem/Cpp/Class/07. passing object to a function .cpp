#include<iostream>
using namespace std;

class sample{
private:
    int n;
public:
    sample(int i){
        n=i;
    }
    int get(){
        return n;
    }
};
int result(sample object){
    return object.get()*object.get();
}
int main(){

sample ob1(10),ob2(3);
cout<<result(ob1)<<endl;
cout<<result(ob2);
}
