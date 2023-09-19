#include<iostream>
using namespace std;

class data{

private:
    int x;
public:
    void set_data(int y);
    int get_data();
};
    void data::set_data(int y){
        x = y;
    }
    int data::get_data(){
        return x;
    }
    int main(){

    data ob1,ob2;
    ob1.set_data(10);
    ob2.set_data(11);
    cout<<"data 1: "<<ob1.get_data()<<endl;
    cout<<"data 1: "<<ob2.get_data()<<endl;

    return 0;

}
