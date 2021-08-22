#include <stdio.h>

int main() {

    int password = 2002, check;

    do  {
        scanf("%d", &check);
        if(check != password){
            printf("Senha Invalida\n");
        }
        else{
            printf("Acesso Permitido\n");
        }
    }while(check != password);

    return 0;
}
