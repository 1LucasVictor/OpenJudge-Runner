#include <stdio.h>

int main(void){
    int a, b, c, k, sum;

    scanf("%d %d %d %d", &a, &b, &c, &k);

    if(a >= k){
        sum = a;
        printf("%d\n", sum);
    }
    else{
        if((a + b) >= k){
            sum = a;
            printf("%d\n", sum);
        }
        else{
            sum = a - (k - (a + b));
            printf("%d\n", sum);
        }
    }
    return 0;
}