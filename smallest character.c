#include <stdio.h>
#include<conio.h>

int main()
{
    char ch,result;

    printf("Enter ten charechters \n");

    result = 'z';

    int i ;
    for(i=0;i<10;i++){
        ch = getchar();
        if(ch < result)
            result = ch;
    }
    printf("The smallest char is %c ",result);
    return 0;
}
