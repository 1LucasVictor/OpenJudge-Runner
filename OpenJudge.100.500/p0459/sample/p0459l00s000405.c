#include <stdio.h>
int main(void){
    int x, y, a, b;
    scanf("%d%d", &x,&y);
    if ((y - 2 * x)%2 == 1 || (4 * x - y) % 2 == 1 || y - 2 * x < 0 || 4 * x - y < 0)
    {
        printf("No");
        return(0);
    }
    printf("Yes");
    return(0);
}
