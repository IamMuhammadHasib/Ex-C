#include<stdio.h>
#include<math.h>

float calculation(float quantity, float note);

int main(){

    float money;
    scanf("%f", &money);

    printf("NOTAS:\n");
    float notes[6] = {100, 50, 20, 10, 5, 2};
    int amount, temp, i=0, j=0;
    for(i=0; i<6; i++){
        amount = calculation(money, notes[i]);
        printf("%d nota(s) de R$ %.2f\n", amount, notes[i]);

        temp = (int)( (fmod(money, notes[i])) *100 + 0.5 );
        money = temp / 100.0;
    }

    printf("MOEDAS:\n");
    float coins[6] = {1, 0.50, 0.25, 0.1, 0.05, 0.01};
    for(j=0; j<6; j++){
        amount = calculation(money, coins[j]);
        printf("%d moeda(s) de R$ %.2f\n", amount, coins[j]);

        temp = (int)( (fmod(money, coins[j])) *100 + 0.5 );
        money = temp / 100.0;
    }

    return 0;
}

float calculation(float money, float note){
    return money/note;
}
