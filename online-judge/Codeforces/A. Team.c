#include<stdio.h>
int main()
{
    int n,x,y,z,count=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&x);
        scanf("%d",&y);
        scanf("%d",&z);

        if(x&y==1 || x&z==1 || y&x==1 || y&z==1 || z&x==1 || z&y==1){
            count++;
        }

    }printf("%d\n",count);

    return 0;
}
