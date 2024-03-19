#include <stdio.h>

int main(void){
    int a, b, c, x;
    int cou = 0;
    scanf("%d %d %d", &a, &b, &c);
    x = a;
    for(; b >= x;){
        if( c % x == 0 )    cou++;
        x++;
    }
    if( a == 1 )    cou--;
    printf("%d\n", cou);
    return 0;
}
