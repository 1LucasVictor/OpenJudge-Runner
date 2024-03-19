#include <stdio.h>
#include<stdlib.h>
int main ( ){
    int a, b, c;
    scanf("%d%d", &a, &b);
    c=(a+b)/2;
    if((a+b)%2==0){
        printf("%d", c);
    }
    else
        printf("IMPOSSIBLE");
}
