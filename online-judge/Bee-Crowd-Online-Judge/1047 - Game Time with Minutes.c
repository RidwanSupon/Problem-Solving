#include<stdio.h>
int main()
{
    int h1,h2,m1,m2;
    scanf("%d%d%d%d",&h1,&h2,&m1,&m2);

   int diff = ((m1*60)+m2)-((h1*60)+h2);

    if(diff<=0)
{diff += 24*60;}

        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",diff/60,diff%60);

    return 0;
}
