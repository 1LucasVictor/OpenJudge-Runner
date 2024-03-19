#include <stdio.h>
int main(void){
    int n;
    scanf("%d", &n);
    if(n % 2 != 0){
        n ++;
    }
    printf("%d\n", n / 2);
    return 0;
}