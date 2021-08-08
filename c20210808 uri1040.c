#include<stdio.h>

int main(){

    float s[4];
    int i = 0;
    for(i=0; i<4; i++){
        scanf("%f", &s[i]);
    }

    float average = ((s[0]*2.0) + s[1]*3.0 + s[2]*4.0 + s[3]) / 10.0;
    printf("Media: %.1f\n", average);
    float newExam;
    if(average >= 7.0){
        printf("Aluno aprovado.\n");
    }
    else if(average < 5.0){
        printf("Aluno reprovado.\n");
    }
    else{
        printf("Aluno em exame.\n");

        printf("Nota do exame: ");
        scanf("%f", &newExam);
        printf("%.1f\n", newExam);

        average = (average + newExam) / 2.0;

        if(average >= 5.0){
            printf("Aluno aprovado.\n");
        }
        else{
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n", average);
    }

    return 0;
}
