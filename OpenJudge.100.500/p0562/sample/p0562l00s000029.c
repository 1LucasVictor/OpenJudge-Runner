#include <stdio.h>

int main(void)
{
    int a, b;
    int sum = 0;
    int puragu = 1;

    scanf("%d %d", &a, &b);

    while(1){
        puragu += (a-1);
        sum++;
        if(puragu >= b){
            printf("%d\n", sum);
            return 0;
        }
    }
}