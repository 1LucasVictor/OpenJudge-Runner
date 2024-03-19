#include <stdio.h>

//Istiyak Hossain

int main()
{
    int n, i, j, x;

    scanf("%d", &n);

    i = 1;
    do{
        x = i;

        if(x % 3 == 0){
            printf(" %d", i);
            continue;
        }
        while(x)
        {
            if(x % 10 == 3){
                printf(" %d", i);
                break;
            }
            x /= 10;
        }

    }while(++i <= n);
    printf("\n");

    return 0;
}

