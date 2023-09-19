#include<stdio.h>
int main()
{


   int n;
   float i,avg,a,b,c;
    scanf("%d",&n);

    for(i=1;i<=n;i++){

    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);


    avg = (a*2)+(b*3)+(c*5);
    float fin = avg/10;
     printf("%.1f\n",fin);
}

    return 0;

}
