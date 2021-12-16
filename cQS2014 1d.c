#include<stdio.h>

int main(){
    int a=5, b=15, r, s;
    r = a<8;
    s = (a<10)&&(b==12);
    printf("r=%d, s=%d", r, s);

    return 0;
}
