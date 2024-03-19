#include <stdio.h>

int main(){

    int num, a;

    scanf("%d", &a);
    
    num = a+a*a+a*a*a;

    printf("%d\n", num);

    return 0;
}