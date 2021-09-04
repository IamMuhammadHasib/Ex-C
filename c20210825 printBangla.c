#include<stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "");
    for(int i=224166128; i<=224167191; i++){
        printf("%lc ", i);
    }
}
