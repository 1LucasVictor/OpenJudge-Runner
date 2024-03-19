#include <stdio.h>

int main(void){
    int a, b;

    scanf("%d %d", &a, &b);

    if(a * b > 81 || (a > 9 || b > 9))
    {
        printf("%d\n", -1);
    }else
    {
        printf("%d\n",a * b);
    }
    return 0;
}