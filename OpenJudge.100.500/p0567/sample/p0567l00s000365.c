#include <stdio.h>

int main(void) {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int x = c - (a - b);
    if(x < 0){
        x = 0;
    }
    printf("%d",x);
}
