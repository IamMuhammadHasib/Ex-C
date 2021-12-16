#include <stdio.h>

int main(){
    char result[10][7] = {

    {'1','X','2','X','2','1','1'},
    {'X','1','1','2','2','1','1'},
    {'X','1','1','2','2','1','1'},
    {'1','X','2','X','2','2','2'},
    {'1','X','1','X','1','X','2'},
    {'1','X','2','X','2','1','1'},
    {'1','X','2','2','1','X','1'},
    {'1','X','2','X','2','1','X'},
    {'1','1','1','X','2','2','1'},
    {'1','X','2','X','2','1','1'}

};

int row = sizeof(result) / sizeof(result[0]);
int column = sizeof(result[0])/sizeof(result[0][0]);

printf("Number of rows: %d\n", row);
printf("Number of columns: %d\n", column);
}
