#include <stdio.h>

int main(void){
    int x, y;
    scanf("%d %d", &x, &y);
    if(2*x <= y && y <= 4*x && y%2 == 0)printf("Yes");
    else printf("No");
    return 0;
}