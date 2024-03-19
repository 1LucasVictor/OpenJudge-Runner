#include <stdio.h>
#include <stdlib.h>

int main(void){

    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);

    if((a <= 9) && (b <= 9)) printf("%d\n", a*b);
    else printf("-1\n");
    
    
    return 0;
}