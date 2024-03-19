#include <stdio.h>

int main(void) {
    int a,result;
    scanf("%d",&a);
    result = a + a*a + a*a*a;
    printf("%d",result);

    return 0;
}