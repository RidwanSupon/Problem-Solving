#include<stdio.h>

int main(){
    float N1, N2, N3, N4;
    scanf("%f%f%f%f",&N1, &N2, &N3, &N4);
    float avg = ((N1*2)+(N2*3)+(N3*4)+N4)/10;
    printf("Media: %.1f\n",avg);
    if(avg>=7.0){
        printf("Aluno aprovado.\n");
    }
    else if(avg >= 5.0 && avg<=6.9){
        printf("Aluno em exame.\nNota do exame: ");
        scanf("%f",&N1);
        printf("%.1f\n",N1);
        avg = (N1 + avg)/2;
        if(avg >= 5.0){
            printf("Aluno aprovado.\n");
        }
        else{
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n",avg);
    }
    else if(avg<5.0){
        printf("Aluno reprovado.\n");
    }
    return 0;
}
