#include <stdio.h>
int main(void) {
    int a, b, c;

    scanf("%d %d", &a, &b);
    while(b--) 
        c += a;
  
    if (c % 2 == 0)
        printf("Even");
    else  
        printf("Odd");
    return 0;
}