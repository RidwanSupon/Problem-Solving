#include<iostream>
using namespace std;

int main(){
int i,a[3];
int n;
cin>>n;
while(n--){
for(i=0;i<3;i++){
    cin>>a[i];

}


for(i=0;i<3-1;i++){
        for(int j=1;j<3;j++){
    {
    if(a[i]>a[j]){
        swap(a[i],a[j]);
    }
        }
        }
}
for(i=0;i<3;i++){
    cout<<a[i+1]<<endl;
    break;
}
}

return 0;
}
