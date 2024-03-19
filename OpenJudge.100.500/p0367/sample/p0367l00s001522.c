#include<stdio.h>

int main(void) {
    int i;
    int x, y, z;
    int tmp;
    int count = 0;
    scanf("%d %d %d", &x, &y, &z);
    
    if(x > y) {
        tmp = x;
        x = y;
        y = tmp;
    }
    for(i = x; i <= y; i++) {
        if( (z % i) == 0 ) {
            count++;
        }
    }
    printf("%d\n", count);
    
    return 0;
}