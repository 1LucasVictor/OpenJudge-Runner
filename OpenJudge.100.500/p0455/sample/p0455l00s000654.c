#include <stdio.h>

int main(void){
    int a, sum;
    scanf("%d", &a);

    sum = a + a*a + a*a*a;
    printf("%d\n", sum);
    return 0;
}
