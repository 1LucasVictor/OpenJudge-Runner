#include <stdio.h>

int main(void){
    int a, b;

    scanf("%d%d", &a, &b);

    if(10 <= a || 10 <= b){
        printf("-1");
        return 0;
    }

    printf("%d", a * b);
    
}