#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(void){
    char *bit = (char *)calloc(128 * 1000 , sizeof(char)); // 8 * 128000こ
    int N,tmp;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &tmp);
        int index = tmp / 8;
        if(bit[index] & (1 << (tmp % 8))){
            printf("NO\n");
            exit(0);
        }
        bit[index] |=  ( 1 << (tmp % 8));
    }
    printf("YES\n");
    return 0;
}
