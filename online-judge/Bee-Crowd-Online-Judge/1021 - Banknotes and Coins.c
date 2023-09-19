#include<stdio.h>
int main()
{   double l;
    int t1,t2,t3,t4,t5,t6,p1,p2,p3,p4,p5,p6,n;
    scanf("%lf",&l);

    n = l*100;


    t1 = n/10000;
    n = n%10000;

   t2 = n/5000;
    n= n%5000;

    t3= n/2000;
    n = n%2000;

    t4 = n/1000;
    n= n%1000;

    t5 = n/500;
    n= n%500;

    t6= n/200;
    n = n%200;

    p1 = n/100;
    n=n%100;

    p2 = n/50;
    n= n %50;

    p3=n/25;
    n=n%25;

    p4=n/10;
    n=n%10;

    p5=n/5;
    n=n%5;

    p6= n/1;
    n= n%1;

  printf("NOTAS:\n");


 printf("%d nota(s) de R$ 100.00\n",t1);
  printf("%d nota(s) de R$ 50.00\n",t2);
   printf("%d nota(s) de R$ 20.00\n",t3);
    printf("%d nota(s) de R$ 10.00\n",t4);
     printf("%d nota(s) de R$ 5.00\n",t5);
      printf("%d nota(s) de R$ 2.00\n",t6);

     printf("MOEDAS:\n");

   printf("%d moeda(s) de R$ 1.00\n",p1);
   printf("%d moeda(s) de R$ 0.50\n",p2);
   printf("%d moeda(s) de R$ 0.25\n",p3);
   printf("%d moeda(s) de R$ 0.10\n",p4);
   printf("%d moeda(s) de R$ 0.05\n",p5);
   printf("%d moeda(s) de R$ 0.01\n",p6);

return 0;
}
