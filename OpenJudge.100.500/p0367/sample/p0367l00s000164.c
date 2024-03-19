#include <stdio.h>

int main(void)
{
    int a, b, c, sum = 0;
    scanf("%d %d %d", &a, &b, &c);
    while(a <= b){
        if((c % a) == 0) sum ++;
        a++;
    }
    printf("%d\n", sum);
    return (0);
}
