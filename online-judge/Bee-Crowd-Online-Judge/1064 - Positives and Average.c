#include<stdio.h>
int main()
{
    int i,count=0;
    float x,avg,sum=0;

    for(i=1;i<=6;i++)
    {
        scanf("%f",&x);
        if(x>0){

        sum=sum+x;
        count++;


    }}
    avg= sum/count;

    printf("%d valores positivos\n",count);
    printf("%.1f\n",avg);
    return 0;
}
