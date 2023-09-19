#include<stdio.h>
#define CYCLE 60
#include<conio.h>

#ifdef _WIN32



#define sleep(x) Sleep(x*1000)
#else
#include<unistd.h>
#endif
int main(){


    int Hour,Minute,Second;

    printf("Enter Hour:Minute:Second: ");
    scanf("%d",&Hour);clrscr();
    scanf("%d",&Minute);clrscr();
    scanf("%d",&Second);clrscr();
    system("CLS");
    int h,m,s;
    h=m=s=0;
    while(1){
            printf("\n\n\n\n\n\n\n########### STOP WATCH ##################\n\n\n\n");
        printf("\t\t%.2d:%.2d:%.2d\n",h,m,s);

            printf("\n\n\n########### STOP WATCH ##################\n\n");
        if(h==Hour && m==Minute && s==Second){
            break;
        }
        else{
            clrscr();
        }
        s++;
        sleep(1);
        if(s==CYCLE){
                m++;
                s=0;
        }
        if(m==CYCLE){
            h++;
            m=0;
        }
    }

        return 0;
}
