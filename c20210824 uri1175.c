#include<stdio.h>

int main(){
    int n[20];
    int s = sizeof(n)/sizeof(int);
    for(int i=0; i<s; i++){
        scanf("%d", &n[i]);
    }

    int t;
    for(int i=0; i<s/2; i++){
        t = n[i];
        n[i] = n[s-i-1];
        n[s-i-1] = t;
    }

    for(int i=0; i<s; i++){
        printf("N[%d] = %d\n", i, n[i]);
    }
}
