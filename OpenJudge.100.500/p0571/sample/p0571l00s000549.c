#include <stdio.h>

    int main(void){

        int n, a, b = 1;
        scanf("%d %d %d", &n, &a, &b);
        int na = 1;

        if( 1 <= n <= 20 && 1 <= a <= 50 && 1 <= b <= 50){
            na = n * a;
        }else{
            return 0;
        }

        if( na == b){
            printf("%d\n",b );
        }else if( na > b){
            printf("%d\n", b );
        }else{
            printf("%d\n", na );
        }

        return 0;
    }