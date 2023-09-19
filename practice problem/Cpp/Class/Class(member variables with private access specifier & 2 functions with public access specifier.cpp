#include<iostream>
using namespace std;

class my_class{
    private:
        int a;
        float b;
    public:
        void Int_Data(int i){
            a=i;
            cout<<a<<endl;
        }
        float float_data(){
            cout<<"Enter Float Value: ";
            cin>>b;
            return b;
        }
};
int main(){
    my_class input;
    input.Int_Data(11);
    float result = input.float_data();

    cout<<result<<endl;
    return 0;
}
