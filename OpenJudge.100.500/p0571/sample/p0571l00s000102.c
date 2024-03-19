#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int n, a, b;
    bool result = false;
    do{
        scanf("%d", &n);
        scanf("%d", &a);
        scanf("%d", &b);
        if((1 <= n && n <= 20) && (1 <= a && a <= 50) && (1 <= b && b <= 50)){
            result = true;
        }
    }while(result == false);

    int na = n * a;
    if (na <= b){
        printf("%d\n", na);
    }else{
        printf("%d\n", b);
    }
    return 0;
}