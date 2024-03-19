#include <stdio.h>
#include <math.h>


int main(void){
    int a;
    scanf("%d", &a);
    printf("%d\n", (int)(a + pow(a,2) + pow(a,3)));
    return 0;
}