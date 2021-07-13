#include <stdio.h>

int main(){

    float product1, qty1, price1;
    float product2, qty2, price2;
    scanf("%f %f %f %f %f %f", &product1, &qty1, &price1, &product2, &qty2, &price2);

    float total = qty1*price1 + qty2*price2;

    printf("VALOR A PAGAR: R$ %.2f\n", total);

    return 0;
}
