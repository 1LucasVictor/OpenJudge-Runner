#include <stdio.h>

int main(void)
{
    int n;
    int i, num;

    scanf("%d", &n);

    num = 100000;
    for (i = 1; i <= n; i++){
        num = num * 1.05;
        //printf("%d\n", num);
        if (num % 1000 != 0){
            num = num / 1000 + 1;
            num = num * 1000;
            //printf("%d\n", num);
        }
        //printf("%d\n", num);
    }

    printf("%d\n", num);

    return (0);
}

