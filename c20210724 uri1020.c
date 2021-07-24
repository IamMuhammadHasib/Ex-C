#include<stdio.h>

int main()
{
    int d;
    scanf("%d", &d);

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", d/365, (d%365)/30, (d%365)%30);
    return 0;
}
