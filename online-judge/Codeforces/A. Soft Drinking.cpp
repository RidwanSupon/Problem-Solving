#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d,e,f,g,h;
    int x=0,y=0,z=0,ans=0;
    cin>>a>>b>>c>>d>>e>>f>>g>>h;

    x=(b*c)/g;
    y=d*e;
    z=f/h;
    if(x<y && x<z){
    ans=x;
}
else if(y<x && y<z){
    ans=y;
}
else
    ans=z;
cout<<ans/a<<endl;

}
