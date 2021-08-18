#include<stdio.h>

int main(){

    float a[3];
    int i;
    for(i=0; i<3; i++){
        scanf("%f", &a[i]);
    }

    if(a[0] > a[1]){
        if(a[0] > a[2]){
            if(a[1]+a[2] > a[0]){
                printf("Perimetro = %.1f\n", a[0]+a[1]+a[2]);
            }
            else{
                printf("Area = %.1f\n", ((a[0]+a[1])/2) * a[2]);
            }
        }
        else{
            if(a[0]+a[1] > a[2]){
                printf("Perimetro = %.1f\n", a[0]+a[1]+a[2]);
            }
            else{
                printf("Area = %.1f\n", ((a[0]+a[1])/2) * a[2]);
            }
        }
    }
    else{
        if(a[1] > a[2]){
            if(a[0]+a[2] > a[1]){
                printf("Perimetro = %.1f\n", a[0]+a[1]+a[2]);
            }
            else{
                printf("Area = %.1f\n", ((a[0]+a[1])/2) * a[2]);
            }
        }
        else{
            if(a[0]+a[1] > a[2]){
                printf("Perimetro = %.1f\n", a[0]+a[1]+a[2]);
            }
            else{
                printf("Area = %.1f\n", ((a[0]+a[1])/2) * a[2]);
            }
        }
    }

    return 0;
}
