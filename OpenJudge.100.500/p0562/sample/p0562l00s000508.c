#include <stdio.h>

int main(void)
{
    int a, b;
    int sum = 0;
    int puragu = 1;

    scanf("%d %d", &a, &b);

    int a1 = a-1;

    while(1){
        if(puragu >= b){
            printf("%d\n", sum);
            break;
        }
        puragu += a1;
        ++sum;
        if(puragu >= b){
            printf("%d\n", sum);
            break;
        }
    }
    return 0;
}