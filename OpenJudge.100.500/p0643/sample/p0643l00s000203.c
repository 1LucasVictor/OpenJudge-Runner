#include <stdio.h>

int main(void){
    int a,b;
    int c;
    scanf("%d %d", &a, &b);
    c = a*b;
    if (c % 2 == 0)
    {
        printf("Even");
    }else{
        printf("Odd");
    }
    return 0;
}