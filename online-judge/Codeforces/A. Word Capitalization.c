#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000];
    scanf("%s",&s);
    for(int i=0;s>'\0';i++){
        if(s[0]>='a'&&s[0]<='z'){
            s[0]-=32;
        }

    }printf("%s\n",s);

    return 0;
}
