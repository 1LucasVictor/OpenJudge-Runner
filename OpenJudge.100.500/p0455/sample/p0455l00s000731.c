#include <stdio.h>

int main(void){
    int a, n;
    scanf("%d\n", &a);
    n = a + a * a + a * a * a;
    printf("%d\n", n);
    return 0;
}
