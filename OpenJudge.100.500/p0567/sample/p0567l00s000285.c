#include<stdio.h>
int main()
{
    int a, b, c, x, y;
    scanf("%d %d %d", &a, &b, &c);
    x = a - b;
    y = c - x;
    if(y>0){
        printf("%d\n", y);
    }
    else printf("0\n");

    return 0;
}
