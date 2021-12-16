#include<stdio.h>

int main(){
    int t;
    char s[100], T[3];
    scanf("%d", &t);
    for(int i=0; i<t; i++){
        scanf("%s", &s);
        scanf("%s", &T);
        if(T[0]<T[1]){
            if(T[0]<T[2]){ //a1
                if(T[1]<T[2]){ //b2c3

                }
                else //c2b3
            }
            else {//a3
                if(T[0]<T[1]){ //b1c2

                }
                else //c1b2
            }
        }
        else {
            if(T[1]<T[2]){ //a2
                if(T[0]<T[2]){ //b1c3

                }
                else //c1b3
            }
            else { //a3
                if(T[0]<T[1]){ //b1c2

                }
                else //c1b2
            }
        }
    }
}
