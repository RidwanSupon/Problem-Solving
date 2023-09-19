#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,temp=0,max=0;
    scanf("%d",&n);
    while(n--){
        scanf("%d %d",&a,&b);
        temp-=a;
        temp+=b;
        if(temp>max){
            max=temp;

        }
    }
    cout<<max<<endl;
}
