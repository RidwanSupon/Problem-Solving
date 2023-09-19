#include<stdio.h>
int main()
{
int a,b,diff;
scanf("%d%d",&a,&b);

diff = (b*60)-(a*60);


if(diff<=0)

     diff += 24*60;

printf("O JOGO DUROU %d HORA(S)\n",diff/60);

return 0;

}
