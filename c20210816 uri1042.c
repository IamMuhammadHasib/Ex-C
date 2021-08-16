#include<stdio.h>

int main(){

    int numbers[3], sorted[3];
    int i;
    for(i=0; i<3; i++){
        scanf("%d", &numbers[i]);
        sorted[i] = numbers[i];
        //printf("%d", sorted[i]);
    }

    int j=0, m=0, temp=0;
    for(j=0; j<3; j++){
        for(m=0; m<2; m++){
            if(sorted[m] > sorted[m+1]){
                temp = sorted[m];
                sorted[m] = sorted[m+1];
                sorted[m+1] = temp;
            }
        }
    }

    int k;
    for(k=0; k<3; k++){
        printf("%d\n", sorted[k]);
    }
    printf("\n");

    int l;
    for(l=0; l<3; l++){
        printf("%d\n", numbers[l]);
    }

    return 0;
}
