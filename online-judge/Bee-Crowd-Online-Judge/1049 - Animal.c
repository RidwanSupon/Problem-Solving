#include<stdio.h>
#include<string.h>
int main()
{
    char a[15];
    char b[15];
    char c[15];
    scanf("%s%s%s",&a,&b,&c);

    if (0==strcmp (a,"vertebrado") && 0==strcmp(b,"ave") && 0==strcmp (c,"carnivoro"))printf("aguia\n");
    if (0==strcmp (a,"vertebrado") && 0==strcmp(b,"ave") && 0==strcmp (c,"onivoro"))printf("pomba\n");
    if (0==strcmp (a,"vertebrado") && 0==strcmp(b,"mamifero") && 0==strcmp (c,"onivoro"))printf("homem\n");
    if (0==strcmp (a,"vertebrado") && 0==strcmp(b,"mamifero") && 0==strcmp (c,"herbivoro"))printf("vaca\n");

    if (0==strcmp (a,"invertebrado") && 0==strcmp(b,"inseto") && 0==strcmp (c,"hematofago"))printf("pulga\n");
    if (0==strcmp (a,"invertebrado") && 0==strcmp(b,"inseto") && 0==strcmp (c,"herbivoro"))printf("lagarta\n");
    if (0==strcmp (a,"invertebrado") && 0==strcmp(b,"anelideo") && 0==strcmp (c,"hematofago"))printf("sanguessuga\n");
    if (0==strcmp (a,"invertebrado") && 0==strcmp(b,"anelideo") && 0==strcmp (c,"onivoro"))printf("minhoca\n");


    return 0;
}
