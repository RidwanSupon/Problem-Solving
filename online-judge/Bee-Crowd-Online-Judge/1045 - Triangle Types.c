#include<stdio.h>
int main()
{
    double a,b,c,i,j,k;
    scanf("%lf%lf%lf",&a,&b,&c);


    i=a*a;
    j=b*b;
    k=c*c;

    if(a>=b + c || b>=a+c || c>=b+a) printf("NAO FORMA TRIANGULO\n");

    else if(i==(j+k) || j==(i+k) || k==(i+j)) printf("TRIANGULO RETANGULO\n");
    else if(i>(j+k) ||j>(i+k) ||k>(i+j))printf("TRIANGULO OBTUSANGULO\n");
    else if(i<(j+k) ||j<(i+k) ||k<(i+j))printf("TRIANGULO ACUTANGULO\n");
    if(a==b&&a==c&&b==c)printf("TRIANGULO EQUILATERO\n");
    if((a==b && a!=c) ||( a==c && a!=b)  || (b==c && b!=a) )printf("TRIANGULO ISOSCELES\n");

    return 0;


}
