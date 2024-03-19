#include <stdio.h>

int main(void)
{
    int n;
    int i,j;
    int sum;
    int x;

    scanf("%d", &n);

    sum = 100000;
    for(i = 1; i <= n; i++){
        sum = sum * 1.05;
        if (sum % 1000 != 0){
            x = 10;
            for (j = 0; j < 3; j++){
                if (sum % x != 0){
                    sum = (sum / 1000) * 1000 + 1000;
                    break;
                }else{
                    x *= 10;
                }
            }

        }
    }
    printf("%d\n", sum);

    return (0);
}
