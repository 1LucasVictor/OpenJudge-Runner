#include<stdio.h>
int main()
{
    int n, a, b, mul;
    scanf("%d %d %d", &n, &a, &b);
    mul = n*a;
    if(mul>b){
        printf("%d\n", b);
    }
    else printf("%d\n", mul);

    return 0;
}
