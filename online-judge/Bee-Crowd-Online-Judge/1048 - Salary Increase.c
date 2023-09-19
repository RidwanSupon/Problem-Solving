#include<stdio.h>
int main()
{
    float x,total,increament;
    scanf("%f",&x);

    if(x<=400.00)
    {
         increament = x*.15;
         total = x+increament;
          printf("Novo salario: %.2f\n",total);
    printf("Reajuste ganho: %.2f\n",increament);
    printf("Em percentual: 15 %%\n");

    }    else if(x<=800.00)
    {
        increament = x*.12;
        total = x+increament;
        printf("Novo salario: %.2f\n",total);
        printf("Reajuste ganho: %.%d\n",increament);
        printf("Em percentual: 12 %%\n");
    }

    else if(x<=1200.00)
    {
         increament = x*.10;
         total = x+increament;
         printf("Novo salario: %.2f\n",total);
         printf("Reajuste ganho: %.2f\n",increament);
         printf("Em percentual: 10 %%\n");

    }
    else if(x<=2000.00)
    {
         increament = x*.07;
         total = x+increament;
         printf("Novo salario: %.2f\n",total);
         printf("Reajuste ganho: %.2f\n",increament);
         printf("Em percentual: 7 %%\n");
    }
    else if(x>2000.00)
    {

    increament = x*.04;
    total = x+increament;
    printf("Novo salario: %.2f\n",total);
    printf("Reajuste ganho: %.2f\n",increament);
    printf("Em percentual: 4 %%\n");
}return 0;
}
