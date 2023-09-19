#include<iostream>
using namespace std;

class lift{

public:
    int my_level,lift_level,count=0;

    void solution(){
        cin>>my_level>>lift_level;
    //cin>>my_level>>lift_level;

    if(my_level<lift_level){
    for(int i=my_level;i<lift_level;i++){
        count++;
    }
    int ans=0;
        ans=count*4+6+5;
        count=0;

        for(int i=my_level;i>=1;i--)
        {

            count++;
        }
        int final_ans=0;
        final_ans=(count*4)+3+5;
        cout<<final_ans+ans<<endl;
    }
    else{
        cout<<(my_level-lift_level)*4+(my_level*4)+19<<endl;
    }
    }
};

int main(){
    lift lift_input;
    lift_input.solution();
    return 0;
}
