#include<stdio.h>

int main(){
    int milesSpent, averageSpeed;
    scanf("%d %d", &milesSpent, &averageSpeed);

    float fuelSpent = (milesSpent * averageSpeed) / 12;
    printf("%.3f\n", fuelSpent);

    return 0;
}
