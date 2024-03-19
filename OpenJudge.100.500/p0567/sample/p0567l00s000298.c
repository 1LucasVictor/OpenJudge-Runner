/* ABC136-A.c
   Takatan */

#include<stdio.h>
int main(void){
    int water1, water2, max;

    scanf( "%d %d %d" , &max, &water1, &water2);

    water2 = water1 + water2 - max; /* 入力 */
    if(water2<0){ /* 負の値の時0とする */
        water2 = 0;
    }

    printf( "%d\n" , water2); /* 出力 */
    return 0;
}