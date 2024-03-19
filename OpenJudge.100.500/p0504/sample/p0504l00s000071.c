#include <stdio.h>

int h;
int a;
int count;

int main(void){
    scanf("%d %d",&h, &a);

    for(count = 0; h >= 1; count++){
        h = h - a;
    }
    printf("%d", count);
    return 0;
}