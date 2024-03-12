#include<iostream>
using namespace std;
int main(){
    int n,m;
    int count=0;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        if(i%2==0){
            for(int j=0;j<m;j++){
            cout<<"#";
            }
        }

        else{
            count++;
            for(int i=0;i<m;i++){

                if(count%2==1 && i==m-1){
                    cout<<"#";
                }
                else if(count%2==0 && i==0){
                    cout<<"#";
                }
                else{
                    cout<<".";
                }
            }
        }
        cout<<endl;
    }
}
