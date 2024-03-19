#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b, c, a_x, c_x;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    a_x = a - b;
    c = c - a_x;

    if(c<0){
        printf("0");
        return 0;
    }

    printf("%d", c);

    return 0;
}