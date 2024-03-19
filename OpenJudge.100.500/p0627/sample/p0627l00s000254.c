#include<stdio.h>
int main()
{   int A, B, sum, sub, mul;
    scanf("%d %d", &A, &B);
    sum = (A+B);
    sub = (A-B);
    mul = (A*B);
    if(sum>=sub && sum>=mul) printf("%d", sum);
    else if(sub>=sum && sub>=mul) printf("%d", sub);
    else printf("%d", mul);
        return 0;
}