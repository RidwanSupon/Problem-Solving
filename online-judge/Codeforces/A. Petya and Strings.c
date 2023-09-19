#include<stdio.h>
#include<string.h>
int main(){

    char s1[100],s2[100];
    int x,y;

    scanf("%s",&s1);
    scanf("%s",&s2);

    for(int i=0;s1[i]>'\0';i++){

            int x = tolower(s1[i]);
            int y = tolower(s2[i]);

        if(x>y){
            printf("1\n");return 0;
        }
        if(x<y){
            printf("-1\n");return 0;
        }
    }
    printf("0\n");

    return 0;
}
