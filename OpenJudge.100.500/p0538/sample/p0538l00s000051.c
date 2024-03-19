#include<stdio.h>
int main()
{
    int a, b, mul;
    scanf("%d %d", &a, &b);
    mul=a*b;
    if(a>0 && a<10 && b>0 && b<10){
        printf("%d\n", mul);
    }
    else printf("-1\n");
    return 0;
}
