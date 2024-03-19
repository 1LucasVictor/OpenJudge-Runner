#include <stdio.h>

int main()
{
    int a, b, k, x = 0, i;
    scanf("%d %d %d", &k, &a, &b);
    for(i = a; i <= b; i++){
        if(i % k != 0){
            x++;
        }
        else if(i % k == 0){
            printf("OK");
            break;
        }
    }
    if(x == b - a + 1){
        printf("NG");
    }

    return 0;
}

