#include <stdio.h>

int main(void)
{
    int l, r, i, j;
    int min = 2019;

    scanf("%d %d", &l, &r);

    for(i = l; i < r; i++){
        for(j = i; j <= r; j++){
            if(i != j && i * j % 2019 < min){
                min = i * j % 2019;
            }
            if(min == 0){
                break;
            }
        }
    }

    printf("%d\n", min);
}